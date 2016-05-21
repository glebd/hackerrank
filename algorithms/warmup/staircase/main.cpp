#include <iostream>
#include <vector>

#define TEST

#ifdef TEST
#include "catch.hpp"
#endif

using namespace std;

vector<string> staircase(int n) {
  return {""};
}

#ifdef TEST

TEST_CASE("Staircase 6") {
  auto actual = staircase(6);
  vector<string> expected{"     #", "    ##", "   ###", "  ####", " #####", "######"};
  CHECK(actual == expected);
}

#else

int main() {
  int n;
  cin >> n;
  auto stairs = staircase(n);
  for (const auto& s : stairs) {
    cout << s << endl;
  }
  return 0;
}

#endif
