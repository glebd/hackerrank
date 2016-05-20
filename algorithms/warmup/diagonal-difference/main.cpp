// https://www.hackerrank.com/challenges/diagonal-difference

#include <iostream>
#include <vector>

#define TEST

#ifdef TEST
#include "catch.hpp"
#endif

using namespace std;

/**
 * Calculates absolute difference between sums of diagonals of a square matrix
 * @param matrix Input square matrix
 * @return Absolute difference of sums of diagonals of @a matrix
 */
int diagonal_diff(const vector<vector<int>>& matrix) {
  int diag1 = 0;
  for (size_t i = 0; i < matrix.size(); ++i) {
    diag1 += matrix[i][i];
  }
  int diag2 = 0;
  for (size_t i = 0; i < matrix.size(); ++i) {
    diag2 += matrix[i][matrix.size() - i - 1];
  }
  return abs(diag2 - diag1);
}

#ifdef TEST

TEST_CASE("Sample 1") {
  vector<vector<int>> input{{11, 2, 4},
                            {4,  5, 6},
                            {10, 8, -12}};
  auto actual = diagonal_diff(input);
  CHECK(actual == 15);
}

#else

int main() {
  size_t n;
  cin >> n;
  vector<vector<int>> a(n, vector<int>(n));
  for (int a_i = 0; a_i < n; a_i++) {
    for (int a_j = 0; a_j < n; a_j++) {
      cin >> a[a_i][a_j];
    }
  }
  auto result = diagonal_diff(a);
  cout << result << endl;
  return 0;
}

#endif
