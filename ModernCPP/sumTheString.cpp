// Create a function that takes 2 integers in form of a string as an input, and outputs the sum (also as a string):
// Example: (Input1, Input2 -->Output)
// "4",  "5" --> "9"
// "34", "5" --> "39"
// "", "" --> "0"
// "2", "" --> "2"
// "-5", "3" --> "-2"
// Notes:
// If either input is an empty string, consider it as zero.
// Inputs and the expected output will never exceed the signed 32-bit integer limit (2^31 - 1)

#include <string>
#include <charconv>
#include <system_error>

std::string sum_str(const std::string& a, const std::string& b) {
    int numA = 0, numB = 0;
    
    if (!a.empty()) {
        auto [ptrA, ecA] = std::from_chars(a.data(), a.data() + a.size(), numA);
        if (ecA != std::errc()) {
            // Conversion failed, numA stays 0
        }
    }
    
    if (!b.empty()) {
        auto [ptrB, ecB] = std::from_chars(b.data(), b.data() + b.size(), numB);
        if (ecB != std::errc()) {
            // Conversion failed, numB stays 0
        }
    }
    
    return std::to_string(numA + numB);
}