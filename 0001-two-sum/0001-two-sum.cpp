// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> a;
//         for(int i=0; i<nums.size();i++){
//             for(int j=i+1; j<nums.size();j++){
                
//                 if((nums[i]+nums[j]==target)){
//                     a.push_back(i);
//                     a.push_back(j);
//                     break;
//                 }
//             }
//         }
//         return a;
//     }
// };

class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); i++) {
            hash[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (hash.find(complement) != hash.end() && hash[complement] != i) {
                return {i, hash[complement]};
            }
        }
        return {};
    }
};