class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        map<char,int> mp;
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
        }
        int count;
        for(auto i: mp){
            if(i.first=='1'){
                count=i.second;
            }
        }
       string ans;
        ans=string(count-1,'1')+string(s.size()-count,'0')+'1';
        return ans;
    }
};