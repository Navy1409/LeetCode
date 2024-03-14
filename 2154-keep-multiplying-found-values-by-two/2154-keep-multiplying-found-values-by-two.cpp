class Solution {
public:
    int findFinalValue(vector<int>& nums, int o) {
        sort(nums.begin(), nums.end());
        while (binary_search(nums.begin(), nums.end(), o)) {
            o *= 2;
        }
        return o;
    }
};