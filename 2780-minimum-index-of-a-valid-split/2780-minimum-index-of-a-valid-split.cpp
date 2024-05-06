#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int len = nums.size();
        unordered_map<int, int> mp;
        int maxFreq = 0, maxFreqElement = 0;

        // Count frequencies and find the element with maximum frequency
        for (int num : nums) {
            mp[num]++;
            if (mp[num] > maxFreq) {
                maxFreq = mp[num];
                maxFreqElement = num;
            }
        }

        // Calculate the threshold frequency
        int threshold = len / 2 + 1;

        // Iterate through the array to find the minimum index
        int count = 0;
        for (int i = 0; i < len; i++) {
            if (nums[i] == maxFreqElement) {
                count++;
                if (count * 2 > i + 1 && maxFreq * 2 > len - i) {
                    return i;
                }
            }
        }
        return -1;
    }
};
