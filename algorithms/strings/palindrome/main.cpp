// https://www.khanacademy.org/computing/computer-science/algorithms/recursive-algorithms/p/challenge-is-a-string-a-palindrome

#include <string>

#include "catch.hpp"

using namespace std;

bool is_palindrome(const string& s) {
  return false;
}

TEST_CASE("a") {
  CHECK(is_palindrome("a"));
}

TEST_CASE("motor") {
  CHECK(!is_palindrome("motor"));
}

TEST_CASE("rotor") {
  CHECK(is_palindrome("rotor"));
}
