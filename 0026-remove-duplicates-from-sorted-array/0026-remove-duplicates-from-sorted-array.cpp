class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int size;
        // for(int i=1; i<nums.size(); i++){
        //     if(nums[i-1]==nums[i]){
        //         nums.erase(nums.begin()+i);
        //         i--;
        //     }
        // }
        // size=nums.size();
        // return size;

        int j=1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1]!=nums[i]){
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
    }
};