// Sum all the numbers of a given array ( cq. list ), except the highest and the lowest element ( by value, not by index! ).
// The highest or lowest element respectively is a single element at each edge, even if there are more than one with the same value.
// Mind the input validation.
// Example
// { 6, 2, 1, 8, 10 } => 16
// { 1, 1, 11, 2, 3 } => 6

#include<vector>
#include<algorithm>
using namespace std;

int sum(vector<int> numbers)
{
  if(numbers.size() <= 2){
    return 0;
  }
    
  int min_val = *std::min_element(numbers.begin(), numbers.end());
  int max_val = *std::max_element(numbers.begin(), numbers.end());
    
  int result = 0;
  bool min_removed = false;
  bool max_removed = false;
    
  for(int num : numbers){
    if(!min_removed && num == min_val){
      min_removed = true;
    }
    else if (!max_removed && num == max_val){
      max_removed = true;
    }
    else{
      result += num;
    }
  }
  return result;
}