// Complete the method that takes a boolean value and return a "Yes" string for true, or a "No" string for false.

#include <stdbool.h>

const char *bool_to_word (bool value)
{
// you can return a static/global variable or a string literal
  const char *convert;
  if(value == true){
    convert = "Yes";
  }
  else{
    convert = "No";
  }
  return convert;
}