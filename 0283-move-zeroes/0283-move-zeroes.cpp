class Solution {
public:
    // void moveZeroes(vector<int>& nums) {
    //     int n= nums.size();
    //     int cnt0=0;
    //     for(int i=0; i<n; i++){
    //         if(nums[i]!=0){
    //             nums[i-cnt0]=nums[i];
    //         }
    //         else{
    //             cnt0++;
    //         }
    //     }
    //     for(int i= n-cnt0; i<n; i++){
    //         nums[i]=0;
    //     }
    // }
    void moveZeroes(vector<int>& nums){
        int j=-1;
        int n= nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }
        if(j==-1) return;
        for(int i=j+1; i<n; i++){
            if(nums[i]!=0){
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};