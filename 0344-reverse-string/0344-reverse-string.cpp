class Solution {
public:
    void reverseString(vector<char>& s) {
        int len=s.size();
        for(int i=len-1, j=0; i>=len/2; i--, j++){
            char ch;
            ch=s[i];
            s[i]=s[j];
            s[j]=ch;
        }
    }
};