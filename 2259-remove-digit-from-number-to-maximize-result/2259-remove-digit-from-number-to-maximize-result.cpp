class Solution {
public:
    string removeDigit(string number, char digit) {
        if(find(number.begin(), number.end(), digit)== number.end()){
            return number;
        }
       string ans="";
       int len=number.size();
       for(int i=0; i<len; i++){
        if(number[i]==digit){
            string temp;
            temp=number.substr(0,i)+number.substr(i+1);
            ans=max(temp,ans);
        }
       }
        return ans;
    }
};