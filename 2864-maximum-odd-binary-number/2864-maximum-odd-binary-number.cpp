class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count=0, len=s.size();
        for(int i=0; i<len; i++){
          if(s[i]=='1'){
              count++;
          }
        }
       string ans;
        ans=string(count-1,'1')+string(s.size()-count,'0')+'1';
        return ans;
    }
};