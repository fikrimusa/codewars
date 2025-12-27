// Multiply two numbers! Simple!
// The arguments are passed as strings.
// The numbers may be way very large
// Answer should be returned as a string
// The returned "number" should not start with zeros e.g. 0123 is invalid

#include <iostream>
#include <string>

using namespace std;

string multiply(string a, string b) {
    auto trim_zeros = [](std::string& s) {
        auto it = std::find_if(s.begin(), s.end(), 
                              [](char c) { return c != '0'; });
        s.erase(s.begin(), it);
        if (s.empty()) s = "0";
    };
    
    trim_zeros(a);
    trim_zeros(b);
    
    if (a == "0" || b == "0") {
        return "0";
    }
    
    const int m = a.size();
    const int n = b.size();
    std::vector<int> result(m + n, 0);
    
    for (int i = m - 1; i >= 0; --i) {
        for (int j = n - 1; j >= 0; --j) {
            int mul = (a[i] - '0') * (b[j] - '0') + result[i + j + 1];
            result[i + j + 1] = mul % 10;
            result[i + j] += mul / 10;
        }
    }
    
    std::string product;
    bool leading_zero = true;
    
    for (int digit : result) {
        if (leading_zero && digit == 0) {
            continue;
        }
        leading_zero = false;
        product.push_back(static_cast<char>(digit + '0'));
    }
    
    return product.empty() ? "0" : product;
}