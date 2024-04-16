#include <string>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if (n <= 1) return n;
        
        int ans = 0;
        unordered_set<char> seen;
        int left = 0, right = 0;
        
        while (right < n) {
            if (seen.find(s[right]) == seen.end()) {
                seen.insert(s[right]);
                ans = max(ans, right - left + 1);
                right++;
            } else {
                seen.erase(s[left]);
                left++;
            }
        }
        
        return ans;
    }
};
