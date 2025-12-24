// Assume "#" is like a backspace in string. This means that string "a#bc#d" actually is "bd"
// Your task is to process a string with "#" symbols.
// Examples
// "abc#d##c"      ==>  "ac"
// "abc##d######"  ==>  ""
// "#######"       ==>  ""
// ""              ==>  ""

#include <stdlib.h>

//returned string should be allocated by the user and will be freed.
char *strclr(const char *s)
{
  char *result = malloc(strlen(s) + 1);
  if(!result) return NULL;
  
  int write_index = 0;
  
  for(int i = 0; s[i] != '\0'; i++){
    if(s[i] == '#'){
      if(write_index > 0){
        write_index--;
      }
    }
    else{
      result[write_index] = s[i];
      write_index++;
    }
  }
  
  result[write_index] = '\0';
  
  return result;
}