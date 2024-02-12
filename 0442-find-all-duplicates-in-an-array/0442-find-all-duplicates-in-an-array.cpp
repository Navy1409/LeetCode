class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int, int> m;
        int i;
        vector<int> ans;
        for(auto i : nums){
            m[i]++;
        }
        for(auto i: m){
            if(i.second==2){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};