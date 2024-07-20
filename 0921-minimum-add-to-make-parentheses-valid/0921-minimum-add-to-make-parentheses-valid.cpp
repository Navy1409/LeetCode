class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans=0;
        stack<char> st;
        int l=s.size();
        for(int i=0; i<l; i++){
            if(s[i]==')'){
                if(st.empty()){
                    ans++;
                }
                else{
                    st.pop();
                }
            }
            else{
                st.push(s[i]);
            }
        }
        return ans+st.size();
    }
};