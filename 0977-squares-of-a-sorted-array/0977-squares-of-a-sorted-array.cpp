class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        int len= nums.size();
        for(int i=0; i<len; i++)
            ans.push_back(nums[i]*nums[i]);
        sort(ans.begin(), ans.end());
        return ans;
    }
};