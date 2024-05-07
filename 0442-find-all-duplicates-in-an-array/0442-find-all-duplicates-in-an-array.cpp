// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& nums) {
//         map<int, int> m;
//         int i;
//         vector<int> ans;
//         for(auto i : nums){
//             m[i]++;
//         }
//         for(auto i: m){
//             if(i.second==2){
//                 ans.push_back(i.first);
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        int n=size(nums);
        for(int i=0;i<n;i++){
            int x=abs(nums[i]);
            if(nums[x-1]<0){
                
                ans.push_back(x);
            }
            nums[x-1]*=-1;
        }
        return ans;
    }
};