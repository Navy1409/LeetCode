class Solution {
public:
    vector<int> diStringMatch(string s) {
        int len= s.size();
        vector<int> q,a;
        for(int i=0; i<=len ;i++){
            q.push_back(i);
        }
        int f=0, r=len;
        for(int i=0; i<len-1; i++){
            if((s[i]=='I'&& s[i]=='I')||(s[i]=='I'&&s[i]=='D')){
                a.push_back(q[f]);
                f++;
            }
            else{
                a.push_back(q[r]);
                r--;
            }
        }
        if(s[len-1]=='I'){
            a.push_back(q[f]);
            f++;
        }
        else{
            a.push_back(q[r]);
            r--;
        }
        a.push_back(q[f]);
        return a;
    }
};