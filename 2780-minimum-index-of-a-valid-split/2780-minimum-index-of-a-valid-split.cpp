class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
        }
        
        for (auto& [num, freq] : count) {
            if (freq * 2 > nums.size()) {
                int idx = -1;
                int cnt = 0;
                for (int i = 0; i < nums.size(); i++) {
                    if (nums[i] == num) {
                        cnt++;
                        if (cnt * 2 > i + 1 && (freq - cnt) * 2 > nums.size() - i - 1) {
                            idx = i;
                            break;
                        }
                    }
                }
                if (idx!= -1) {
                    return idx;
                }
            }
        }
        
        return -1;
    }
};