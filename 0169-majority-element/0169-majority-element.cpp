class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0, el, len=nums.size();
        //Moores voore algo
        for(int i=0; i<len; i++){
            if(c==0){
                el=nums[i];
                c=1;
            }
            else if(el==nums[i]){
                c++;
            }
            else{
                c--;
            }
        }
        int cel=0;
        for(int i=0;i<len;i++){
            if(nums[i]==el){
                cel++;
            }
        }
        if(cel>=len/2){
            return el;
        }
        return -1;
    }
};