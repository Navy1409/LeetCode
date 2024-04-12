#include <string>

using namespace std;

class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.size();
        string result = "";
        
        for (char digit : num) {
            while (!result.empty() && k > 0 && digit < result.back()) {
                result.pop_back();
                k--;
            }
            result.push_back(digit);
        }
        
        // Remove remaining digits from the end if k > 0
        while (k > 0 && !result.empty()) {
            result.pop_back();
            k--;
        }
        
        // Remove leading zeros
        int leadingZeros = 0;
        while (leadingZeros < result.size() && result[leadingZeros] == '0') {
            leadingZeros++;
        }
        result = result.substr(leadingZeros);
        
        return result.empty() ? "0" : result;
    }
};
