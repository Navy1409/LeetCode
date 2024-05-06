class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int len = nums.size();
        map<int, int> mp;
        for (auto i : nums) {
            mp[i]++;
        }
        int c, el;
        for (auto i : mp) {
            if (i.second * 2 > len) {
                c = i.second;
                el = i.first;

                break;
            }
        }
        int ci = 0;
        for (int i = 0; i < len; i++) {
            if (nums[i] == el) {
                ci++;
                if (ci * 2 > i + 1 && (c - ci) * 2 > (len - i - 1)) {
                    return i;
                }
            }
        }

        return -1;
    }
};