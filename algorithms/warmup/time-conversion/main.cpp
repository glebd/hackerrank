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

#else

int main() {
  string time;
  cin >> time;
  cout << miltime(time) << endl;
  return 0;
}

#endif
