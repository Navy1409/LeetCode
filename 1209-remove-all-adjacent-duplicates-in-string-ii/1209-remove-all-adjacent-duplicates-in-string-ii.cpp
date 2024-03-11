class Solution {
public:
    string removeDuplicates(string s, int k) {
        int len=s.size();
        int c=0;
        stack<pair<char,int>> ans;
        for(int i=0; i<len; i++){
            if(ans.empty()||s[i]!=ans.top().first){
                ans.push({s[i],1});
            }
            else{
                ans.top().second++;
                if(ans.top().second==k){
                    ans.pop();
                }
            }
        }
        string a;
        while(!ans.empty()){
            a+=string(ans.top().second,ans.top().first);
            ans.pop();
        }
        reverse(a.begin(),a.end());
        return a;
    }
};