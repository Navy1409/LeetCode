class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> a,b,ans;
        int len=nums.size();
        for(int i=0; i<len; i++){
            if(nums[i]>=0){
                a.push_back(nums[i]);
            }
            else{
                b.push_back(nums[i]);
            }
        }
        int len1=a.size();
        for(int i=0; i<len1; i++){
            ans.push_back(a[i]);
            ans.push_back(b[i]);
        }
        return ans;
    }
};