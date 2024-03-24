class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> mp;
        int len=nums.size();
        for(int i=0;i<len;i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>1){
                return nums[i];
            }
        }
        return -1;
    }
};