#include <Rcpp.h>
using namespace Rcpp;

inline double bisquare(double u, double b) {
  u = fabs(u);
  return (u < b) ? pow(1 - pow(u / b, 2), 2) : 0;
}

// Adapted from http://stackoverflow.com/questions/1719070/
// NB: for performance, this does an inplace quick select
double median(std::vector<double>* x) {
  if (x->empty()) return NAN;

  int size = x->size();
  std::vector<double>::iterator upper = x->begin() + (int) (size / 2);
  std::nth_element(x->begin(), upper, x->end());

  if (size % 2 == 1) {
    return *upper;
  } else {
    std::vector<double>::iterator lower = upper - 1;
    std::nth_element(x->begin(), lower, upper);
    return (*upper + *lower) / 2.0;
  }
}

// -----------------------------------------------------------------------------

struct Regression {
  double alpha, beta;
};

Regression regress(const std::vector<double>& x,
                   const std::vector<double>& y,
                   const std::vector<double>& w) {
  int n = x.size();

  double x_wsum = 0, y_wsum = 0, w_sum = 0;
  for (int i = 0; i < n; ++i) {
    x_wsum += x[i] * w[i];
    y_wsum += y[i] * w[i];
    w_sum += w[i];
  };
  double x_mean = x_wsum / w_sum, y_mean = y_wsum / w_sum;

  double var_xy = 0, var_x = 0;
  for (int i = 0; i < n; ++i) {
    var_xy += w[i] * (x[i] - x_mean) * (y[i] - y_mean);
    var_x += w[i] * pow((x[i] - x_mean), 2);
  }

  Regression results;
  results.beta = (var_xy / var_x);
  results.alpha = y_mean - results.beta * x_mean;
  return results;
}

double smoothLinear(const std::vector<double>& x,
                    const std::vector<double>& y,
                    const std::vector<double>& w) {

  return regress(x, y, w).alpha;
}

Regression regressRobust(const std::vector<double>& x,
                         const std::vector<double>& y,
                         const std::vector<double>& w,
                         int iterations = 3) {
  int n = x.size();
  Regression prev = regress(x, y, w);

  for (int k = 0; k < iterations; ++k) {
    std::vector<double> resid(n);
    for (int i = 0; i < n; ++i) {
      resid[i] = fabs(y[i] - (prev.alpha + prev.beta * x[i]));
    }

    std::vector<double> w_(w);
    double b = 6 * median(&resid);
    if (b < 1e-20) break;
    for (int i = 0; i < n; ++i) {
      w_[i] *= bisquare(resid[i], b);
    }

    prev = regress(x, y, w_);
  }

  return prev;
}


double smoothRobust(const std::vector<double>& x,
                    const std::vector<double>& y,
                    const std::vector<double>& w,
                    int iterations = 3) {

  return regressRobust(x, y, w, iterations).alpha;
}
