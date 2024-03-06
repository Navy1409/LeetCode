class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int len=nums.size();
        for(int i=0; i<len-1; i++){
            if(nums[i]==nums[i+1]){
                return nums[i];
            }
        }
        return -1;
    }
};
// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int slow = nums[0];
//         int fast = nums[nums[0]];

//         while (slow != fast) {
//             slow = nums[slow];
//             fast = nums[nums[fast]];
//         }

//         fast = 0;
//         while (slow != fast) {
//             slow = nums[slow];
//             fast = nums[fast];
//         }

//         return slow;
//     }
// };