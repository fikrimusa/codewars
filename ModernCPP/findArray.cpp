// You are given two arrays, arr1 and arr2, where arr2 always contains integers.
// Write a function returning the elements of arr1 pointed at ( zero-based ) by arr2, in order, such that:
// for arr1 = ['a', 'a', 'a', 'a', 'a'], arr2 = [2, 4] the function returns ['a', 'a']
// for arr1 = [0, 1, 5, 2, 1, 8, 9, 1, 5], arr2 = [1, 4, 7] the function returns [1, 1, 1]
// for arr1 = [0, 3, 4], arr2 = [2, 6] the function returns [4]
// for arr1 = ['a','b','c','d'] , arr2 = [2,2,2], the function returns ['c','c','c']
// for arr1 = ['a','b','c','d'], arr2 = [3,0,2] the function returns ['d','a','c']
// Note: when an element of arr2 is greater than the index of the last element of arr1 no element of arr1 should be added to the resulting array. If either arr1 or arr2 is empty, you should return an empty array (empty list in python, empty vector in c++).
// Note: for c++ use std::vector<T> arr1, arr2.

#include <vector>

template <typename T>
std::vector<T> find_array(const std::vector<T> &arr1,
                          const std::vector<int> &arr2)
{
    std::vector<T> result;
    
    if (arr1.empty() || arr2.empty()) {
        return result;
    }
    
    result.reserve(arr2.size());
    
    for (int index : arr2) {
        if (index >= 0 && index < static_cast<int>(arr1.size())) {
            result.push_back(arr1[index]);
        }
    }
    return result;
}