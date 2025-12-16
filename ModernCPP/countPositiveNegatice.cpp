// Given an array of integers.
// Return an array, where the first element is the count of positives numbers and the second element is sum of negative numbers. 0 is neither positive nor negative.
// If the input is an empty array or is null, return an empty array.
// Example
// For input [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15], you should return [10, -65].

#include <vector>
#include <algorithm>
#include <numeric>

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
    if (input.empty()) {
        return {};
    }
    
    int countPositives = std::count_if(input.begin(), input.end(),
                                       [](int x) { return x > 0; });
    
    int sumNegatives = std::accumulate(input.begin(), input.end(), 0,
                                       [](int total, int x) { 
                                           return x < 0 ? total + x : total;
                                       });
    
    return {countPositives, sumNegatives};
}