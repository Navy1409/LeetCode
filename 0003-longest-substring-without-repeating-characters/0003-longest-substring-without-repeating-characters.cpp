#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if (n <= 1) return n;

        int ans = 0;
        unordered_map<char, int> seen;
        int left = 0, right = 0;

        while (right < n) {
            if (seen.find(s[right]) != seen.end() && seen[s[right]] >= left) {
                ans = max(ans, right - left);
                left = seen[s[right]] + 1;
            }
            seen[s[right]] = right;
            right++;
        }

        return max(ans, right - left);
    }
};