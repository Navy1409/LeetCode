class Solution {
public:
    int longestPalindrome(string s) {
        int len=s.size(), count=0, flag=0;
        map<char, int> mp;
        for(auto i : s){
            mp[i]++;
        }
        if(mp.size()==1){
            for(auto i: mp){
                return i.second;
            }
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