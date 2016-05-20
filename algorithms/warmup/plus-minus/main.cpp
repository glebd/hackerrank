#include <iostream>
#include <vector>
#include <iomanip>
#include <sstream>

#define TEST

#ifdef TEST
#include "catch.hpp"
#endif

using namespace std;

const int PRECISION = 6;

vector<double> plus_minus(const vector<int>& vec) {
  return {0, 0, 0};
};

vector<string> format_double(const vector<double>& vec, int precision) {
  vector<string> out(vec.size());
  transform(begin(vec), end(vec), begin(out), [=](double d){
    ostringstream os;
    os.setf(ios::fixed);
    os << setprecision(precision) << d;
    return os.str();
  });
  return out;
}

#ifdef TEST

TEST_CASE("Sample 1") {
  vector<int> input{-4, 3, -9, 0, 4, 1};
  auto actual = plus_minus(input);
  vector<double> expected{0.5, 0.333333, 0.166667};
  CHECK(actual == expected);
  auto expected_strings = format_double(expected, PRECISION);
  auto actual_strings = format_double(actual, PRECISION);
  CHECK(actual_strings == expected_strings);
}

#else

int main() {
  size_t n;
  cin >> n;
  vector<int> arr(n);
  for (int arr_i = 0; arr_i < n; arr_i++) {
    cin >> arr[arr_i];
  }
  auto result = plus_minus(arr);
  auto result_strings = format_double(result, PRECISION);
  for (const auto& s : result_strings) {
    cout << s << endl;
  }
  return 0;
}


#endif
