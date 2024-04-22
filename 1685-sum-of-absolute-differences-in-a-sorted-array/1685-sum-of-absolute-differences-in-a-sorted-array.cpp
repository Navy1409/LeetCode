class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int len=nums.size();
        int sum=0;
        for(int i=0; i<len ;i++){
            sum+=nums[i];
        }
        vector<int> ans;
        int ps=0;
        for(int i=0; i<len; i++){
            int a;
            sum-=nums[i];
            if(i!=0){
                ps+=nums[i-1];
            }
            a=sum-(nums[i]*(len-i-1))+(nums[i]*i-ps);
            ans.push_back(a);
        }
        return ans;
    }
};