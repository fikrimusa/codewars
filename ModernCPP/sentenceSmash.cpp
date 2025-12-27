// Sentence Smash
// Write a function that takes an array of words and smashes them together into a sentence and returns the sentence. You can ignore any need to sanitize words or add punctuation, but you should add spaces between each word. Be careful, there shouldn't be a space at the beginning or the end of the sentence!
// Example
// ['hello', 'world', 'this', 'is', 'great']  =>  'hello world this is great'
// Assumptions
// You can assume that you are only given words.
// You cannot assume the size of the array.
// You can assume that you do get an array.

#include <vector>
#include <string>
#include <numeric>

std::string smash(const std::vector<std::string>& words)
{
  if(words.empty()) return "";
  
  return std::accumulate(words.begin() + 1, words.end(),
                         words[0],
                        [](const std::string& a, const std::string& b){
                          return a + " " + b;
                        }
                        );
}