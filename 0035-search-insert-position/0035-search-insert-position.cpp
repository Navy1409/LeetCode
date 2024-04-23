// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
//         if(find(nums.begin(), nums.end(), target)==nums.end()){
//             int ans=0;
//         int len =nums.size();
//         for(int i=0; i<len; i++){
//             if(nums[i]<target && i==len-1){
//                 return len;
//             }
//             if(nums[i]>target){
//                 ans=i;
//                 break;
//             }
//         }
//         return ans;
//         }
//         int ans=0;
//         int len =nums.size();
//         for(int i=0; i<len; i++){
//             if(nums[i]==target){
//                 ans=i;
//                 break;
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0, end= nums.size()-1;
        while(start<=end)
        {
            int mid = (start+end)/2;
            if(nums[mid]==target)
                return mid;
            else if(target > nums[mid])
            {
                start = mid+1;
            }
            else
                end = mid-1;
        }
        return start;
    }
};
