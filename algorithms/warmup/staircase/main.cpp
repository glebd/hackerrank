#include <iostream>
#include <vector>
#include <sstream>
#include <iomanip>

#define TEST

#ifdef TEST
#include "catch.hpp"
#endif

using namespace std;

vector<string> staircase(int n) {
  vector<string> result;
  for (size_t i = 1; i <= n; ++i) {
    ostringstream os;
    string hashes(i, '#');
    os << setw(n) << hashes;
    result.push_back(os.str());
  }
  return result;
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
