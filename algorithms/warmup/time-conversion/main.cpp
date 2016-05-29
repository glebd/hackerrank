#include <iostream>

#define TEST

#ifdef TEST
#include "catch.hpp"
#endif

using namespace std;

string miltime(string time) {
  return time;
}

#ifdef TEST

TEST_CASE("AM") {
  CHECK(miltime("07:05:45AM") == "07:05:45");
}

TEST_CASE("PM") {
  CHECK(miltime("07:05:45PM") == "19:05:45");
}

#else

int main() {
  string time;
  cin >> time;
  cout << miltime(time) << endl;
  return 0;
}

#endif
