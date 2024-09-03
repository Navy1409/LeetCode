class Solution {
  public:
  bool check(vector<int>& nums) {
    //   int flag =0, index;
    //   int ans=0;
    //   vector<int> arr;
    //   if(nums.size()>2){
    //       for(int i=1; i<nums.size()-1; i++){
    //           if(nums[i+1]>=nums[i]&&nums[i]<nums[i-1]){
    //               index=i;
    //               break;
    //             }
    //             else if(nums[i+1]<nums[i]&&(i+1==nums.size()-1)){
    //                 index=nums.size()-1;
    //             }
    //             else{
    //                 index=0;
    //             }
    //         }
    //         for(int i= index; i<nums.size(); i++){
    //             arr.push_back(nums[i]);
    //         }
    //         for(int i= 0; i<index; i++){
    //             arr.push_back(nums[i]);
    //         }
    //         for(int i=0; i<arr.size()-1; i++){
    //             if(arr[i+1]<arr[i]){
    //                 flag++;
    //             }
    //         }
    //         if(flag==0){
    //             ans=1;
    //         }
    //         else{
    //             ans=0;
    //         }
    //     }
    //     else{
    //        ans=1;
    //     }
    //     if(ans==0){
    //         return false;
    //     }
    //     else{
    //         return true;
    //     }
    int c=0, n=nums.size();
    for(int i=0; i<n; i++){
        if(nums[i]>nums[(i+1)%n]){
            c++;
        }
    }
    if(c>1){
        return false;
    }
    return true;
  }
};