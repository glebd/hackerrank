// https://www.khanacademy.org/computing/computer-science/algorithms/recursive-algorithms/p/challenge-is-a-string-a-palindrome

#include <string>

#include "catch.hpp"

using namespace std;

//#define RECURSIVE

#ifdef RECURSIVE

// Run time complexity: O(n)
// Stack space complexity: O(log n)
bool is_palindrome(const string& s) {
  if (s.length() < 2) return true;
  if (s[0] != s[s.length() - 1]) return false;
  auto mid = s.substr(1, s.length() - 2);
  return is_palindrome(mid);
}

#else

// Run time complexity: O(n)
bool is_palindrome(const string& s) {
  if (s.length() < 2) return true;
  for (size_t ofs = 0; ofs < s.length() / 2; ++ofs) {
    if (s[ofs] != s[s.length() - ofs - 1]) return false;
  }
  return true;
}

#endif

TEST_CASE("a") {
  CHECK(is_palindrome("a"));
}

TEST_CASE("motor") {
  CHECK(!is_palindrome("motor"));
}

TEST_CASE("rotor") {
  CHECK(is_palindrome("rotor"));
}

TEST_CASE("macadam") {
  CHECK(!is_palindrome("macadam"));
}

TEST_CASE("naan") {
  CHECK(is_palindrome("naan"));
}
