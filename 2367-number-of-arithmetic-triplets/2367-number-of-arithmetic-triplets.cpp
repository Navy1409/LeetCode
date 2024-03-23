class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int count=0;
        map<int ,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if( mpp[nums[i]+diff] && mpp[nums[i]+ diff + diff]){
                count++;
            }
        }
        return count;
    }
};