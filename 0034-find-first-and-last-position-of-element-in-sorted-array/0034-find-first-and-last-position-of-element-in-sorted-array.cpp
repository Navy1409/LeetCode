class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=0, last=nums.size()-1,mid=start+(last-start)/2;;
        vector<int> ans(2,-1);
        while(start<=last){
            mid=start+(last-start)/2;
            if(nums[mid]==target){
                ans[0]=mid;
                last=mid-1;
            }
            else if(nums[mid]>target){
                last=mid-1;
            }
            else{
                start= mid+1;
            }
        }
        start=0;
        last=nums.size()-1;
        mid=start+(last-start)/2;
        while(start<=last){
            if(nums[mid]==target){
                ans[1]=mid;
                start=mid+1;
            }
            else if(nums[mid]>target){
                last=mid-1;
            }
            else{
                start= mid+1;
            }
             mid=start+(last-start)/2;
        }
        return ans;
    }
};