class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int z=nums[0];
        for(int i=1; i<nums.size(); i++){
            z^=nums[i];
        }
        int c=0;
        while(k || z){
            if(k%2 != z%2){
                c++;
            }
            k/=2;
            z/=2;
        }
        return c;
    }
};