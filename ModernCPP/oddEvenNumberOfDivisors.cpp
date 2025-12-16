#include <string>
#include <cmath>

std::string oddity(long long int n) {
  int root = static_cast<int>(std::sqrt(n));
  return (root * root == n) ? "odd" : "even";
}