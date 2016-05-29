#include <iostream>

#define TEST

#ifdef TEST
#include "catch.hpp"
#endif

using namespace std;

#ifdef TEST

#else

int main() {
  cout << "Hello, World!" << endl;
  return 0;
}

#endif
