class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> m;
        m[0] = 1;
        int currsum = 0;
        int totalsum = 0;
        for (auto num : nums) {
            currsum += num;
            if (m.find(currsum - goal) != m.end()) {
                totalsum += m[currsum - goal];
            }
            m[currsum]++;
        }
        return totalsum;
    }
};