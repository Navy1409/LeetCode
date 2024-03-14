class Solution {
public:
    int findFinalValue(vector<int>& nums, int o) {
        int len=nums.size();
        int i;
        for(i=0; i<len; i++){
            if(nums[i]==o){
                o*=2;
                i=-1;
            }
        }
        return o;
    }
};