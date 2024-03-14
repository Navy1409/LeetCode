class Solution {
public:
    int findFinalValue(vector<int>& nums, int o) {
        std::sort(nums.begin(), nums.end());
        while (std::binary_search(nums.begin(), nums.end(), o)) {
            o *= 2;
        }
        return o;
    }
};