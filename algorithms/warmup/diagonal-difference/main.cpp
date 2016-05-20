// https://www.hackerrank.com/challenges/diagonal-difference

#include <iostream>
#include <vector>

using namespace std;

int main() {
  size_t n;
  cin >> n;
  vector<vector<int>> a(n, vector<int>(n));
  for (int a_i = 0; a_i < n; a_i++) {
    for (int a_j = 0; a_j < n; a_j++) {
      cin >> a[a_i][a_j];
    }
  }
  return 0;
}
