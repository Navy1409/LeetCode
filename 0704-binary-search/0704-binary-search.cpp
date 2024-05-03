class Solution {
public:
    int search(vector<int>& nums, int target) {
        int f=0, l=nums.size()-1;
        int m;
        while(f<=l){
            m=(l+f)/2;
            if(nums[m]==target){
                return m;
            }
            else if(nums[m]<target){
                f=m+1;
            }
            else{
                l=m-1;
            }
        }
        return -1;
    }
};