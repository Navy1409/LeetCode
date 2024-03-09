class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size();
        unordered_set<int> nums1Set(nums1.begin(), nums1.end());

        for (auto i : nums2) {
            if (nums1Set.find(i) != nums1Set.end()) {
                return i;
            }
        }

        return -1;
    }
};
