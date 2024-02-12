class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> m;
        int i;
        vector<int> ans;
        for(auto i : nums){
            m[i]++;
        }
        for(auto i :m){
            if(i.second>(nums.size()/2)){
                return i.first;
            }
        }
        return 0;
    }
};