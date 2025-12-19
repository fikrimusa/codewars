// Assume "#" is like a backspace in string. This means that string "a#bc#d" actually is "bd"
// Your task is to process a string with "#" symbols.
// Examples
// "abc#d##c"      ==>  "ac"
// "abc##d######"  ==>  ""
// "#######"       ==>  ""
// ""              ==>  ""
#include <string>

std::string cleanString(const std::string &s) {
  
  std::string result;
  
  for(char c : s){     
    if(c == '#'){
      if(!result.empty()){
        result.pop_back();
      }
    }
    else{
      result.push_back(c);
    }
  }
  return result;
}