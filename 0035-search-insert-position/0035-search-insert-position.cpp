class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(find(nums.begin(), nums.end(), target)==nums.end()){
            int ans=0;
        int len =nums.size();
        for(int i=0; i<len; i++){
            if(nums[i]<target && i==len-1){
                return len;
            }
            if(nums[i]>target){
                ans=i;
                break;
            }
        }
        return ans;
        }
        int ans=0;
        int len =nums.size();
        for(int i=0; i<len; i++){
            if(nums[i]==target){
                ans=i;
                break;
            }
        }
        return ans;
    }
};