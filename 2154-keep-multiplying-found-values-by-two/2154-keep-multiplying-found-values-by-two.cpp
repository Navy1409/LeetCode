class Solution {
public:
    int findFinalValue(vector<int>& nums, int o) {
       std::vector<int>::iterator it = std::find(nums.begin(), nums.end(), o);
        while (it != nums.end()) {
            o *= 2;
            it = std::find(nums.begin(), nums.end(), o);
        }
        return o;
    }
};