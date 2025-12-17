// Return the number (count) of vowels in the given string.
// We will consider a, e, i, o, u as vowels for this Kata (but not y).
// The input string will only consist of lower case letters and/or spaces.

#include <string>
#include <algorithm>

int getCount(const std::string& inputStr){
  return std::count_if(inputStr.begin(), inputStr.end(),
    [](char c){
      return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    });
}