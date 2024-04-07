class Solution {
public:
    bool checkValidString(string s) {
        int starCount=0, ob=0, cb=0;
        int len= s.size();
        for(int i=0; i<len; i++){
            if(s[i]=='('){
                ob++;
            }
            else if(s[i]==')'){
                cb++;
            }
            else if(s[i]=='*'){
                starCount++;
            }
        }
        cout<<ob<<" "<<cb<<" "<<starCount;
        if(ob==cb){
            return true;
        }
        if(abs(ob-cb)<=starCount){
            return true;
        }
        return false;

    }
};