#include <iostream>
#include <sstream>
#include <iomanip>

#define TEST

#ifdef TEST
#include "catch.hpp"
#endif

using namespace std;

/**
 * Converts AM/PM time to 24-hour time
 * @param time Time string in the format "hh:mm:ss{AM|PM}"
 * @return Time string in 24-hour format "hh:mm:ss"
 */
string miltime(string time) {
  if (time.length() != 10) return time;
  string h = time.substr(0, 2);
  string m = time.substr(3, 2);
  string s = time.substr(6, 2);
  string a = time.substr(8, 1);
  int hour = atoi(h.c_str());
  if (a == "P") hour += 12;
  ostringstream os;
  os.fill('0');
  os << setw(2) << hour << ":" << m << ":" << s;
  return os.str();
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
