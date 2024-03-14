class Solution {
public:
bool no(string s){
    int len=s.length();
    for(int i=0; i<len; i++){
        if(!isdigit(s[i])){
            return false;
        }
    }
    return true;
}
    int maximumValue(vector<string>& strs) {
        int maxi=-1;
        int len=strs.size();
        for(int i=0; i<len; i++){
            if(no(strs[i])){
                maxi=max(maxi, stoi(strs[i]));
            }
            else{
                int leni=strs[i].length();
                maxi=max(maxi, leni);
            }
        }
        return maxi;
    }
};