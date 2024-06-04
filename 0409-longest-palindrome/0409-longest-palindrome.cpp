class Solution {
public:
    int longestPalindrome(string s) {
        int count=0, flag=0;
        map<char, int> mp;
        for(auto i : s){
            mp[i]++;
        }
        for(auto m: mp){
            if(m.second%2==0){
                count+=m.second;
                cout<< m.first<<m.second<<endl;
            }
            if(m.second%2==1){
               flag=1;
               count+=m.second-1;
            }
        }
        return count+flag;
    }
};