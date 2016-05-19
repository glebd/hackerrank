// https://www.hackerrank.com/challenges/a-very-big-sum

#include <iostream>
#include <numeric>
#include <vector>

#define TEST

#ifdef TEST
#include "catch.hpp"
#endif

using namespace std;

long long calc_big_sum(const vector<long long>& arr) {
  return accumulate(begin(arr), end(arr), 0LL);
}

#ifdef TEST

TEST_CASE("Sample 1") {
  vector<long long> input{1000000001LL, 1000000002LL, 1000000003LL, 1000000004LL, 1000000005LL};
  auto actual = calc_big_sum(input);
  CHECK(actual == 5000000015LL);
}

#else

int main() {
  size_t n;
  cin >> n;
  vector<long long> arr(n);
  for (size_t arr_i = 0; arr_i < n; arr_i++) {
    cin >> arr[arr_i];
  }
  cout << calc_big_sum(arr) << endl;
  return 0;
}

#endif
