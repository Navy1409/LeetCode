class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());
        int len=nums.size();
        for(int i=0; i<len; i++){
            if(find(nums.begin(),nums.end(), -1*nums[i])!= nums.end()){
                return nums[i];
            }
        }
        return -1;
    }
};