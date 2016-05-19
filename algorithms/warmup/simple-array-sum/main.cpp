#include <vector>
#include <iostream>
#include <numeric>

#define TEST

#ifdef TEST

#include "catch.hpp"

#endif

using namespace std;

int calc_sum(const vector<int>& arr) {
  return accumulate(begin(arr), end(arr), 0);
}

#ifdef TEST

TEST_CASE("Sample 1") {
  auto start = chrono::system_clock::now();
  vector<int> input{1, 2, 3, 4, 10, 11};
  auto actual = calc_sum(input);
  CHECK(actual == 31);
  auto end = chrono::system_clock::now();
  std::chrono::duration<double> diff = end - start;
  REQUIRE(diff.count() <= 1.0);
}

#else

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int arr_i = 0; arr_i < n; arr_i++) {
    cin >> arr[arr_i];
  }
  cout << calc_sum(arr) << endl;
  return 0;
}

#endif
