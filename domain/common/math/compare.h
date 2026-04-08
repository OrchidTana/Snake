//
// Created by Laplace on 2026/4/3.
//

#ifndef DOMAIN_COMMON_MATH_COMPARE_H
#define DOMAIN_COMMON_MATH_COMPARE_H
#include <cmath>
namespace domain {
namespace common {
namespace math {
bool doubleLess(const double a,const double b,const double precision = 1e-9) {
  return a - b < precision;
}
bool doubleLessEqual(const double a,const double b,const double precision =
  1e-9) {
  return a - b <= precision;
}
bool doubleEqual(const double a,const double b,const double precision = 1e-9) {
  return std::fabs(a - b) < precision;
}
}
}
}

#endif // DOMAIN_COMMON_MATH_COMPARE_H
