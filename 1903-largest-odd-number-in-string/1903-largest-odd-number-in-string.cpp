class Solution {
public:
    string largestOddNumber(string num) {
        int index=-1;
        string ans="";
        for(int i=num.size()-1; i>=0;i--){
            int digit=num[i]-'0';
            if(digit%2==1){
                index=i;
                break;
            }
        }
        return num.substr(0, index + 1);
    }
};