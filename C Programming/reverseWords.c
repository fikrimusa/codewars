// Complete the solution so that it reverses all of the words within the string passed in.
// Words are separated by exactly one space and there are no leading or trailing spaces.
// Example(Input --> Output):
// "The greatest victory is that which requires no battle" --> "battle no requires which that is victory greatest The"

#include <stddef.h>

char *reverse_words(char *reversed, const char *words)
{
// `reversed` has room for `strlen(words) + 1` bytes
// write to `reversed` and return it:
  int len = strlen(words);
  const char *word_ends[len];
  int word_count = 0;
  
  const char *p = words;
  while(*p){
    
    while(*p == ' ') p++;
    
    if(!*p) break;
    
    word_ends[word_count++] = p;
    
    while(*p && *p != ' ') p++;
  }
  
  int pos = 0;
  
  for(int i = word_count - 1; i >= 0; i--){
    const char *word_start = word_ends[i];
    while (*word_start && *word_start != ' '){
        reversed[pos++] = *word_start++;
    }

    if(i > 0){
        reversed[pos++] = ' ';
    }
  }

  reversed[pos] = '\0';
  return reversed;
}