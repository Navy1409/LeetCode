class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int miss;
        sort(nums.begin(), nums.end());
        nums.push_back(0);
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]!=i){
                miss=i;
                break;
            }
        }
        return miss;
    }
};