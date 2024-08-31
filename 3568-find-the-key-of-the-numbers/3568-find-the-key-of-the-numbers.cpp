class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        vector<int> v1,v2,v3;
        int x=4;
        while(x--){
            v1.push_back(num1%10);
            v2.push_back(num2%10);
            v3.push_back(num3%10);
            num1/=10;
            num2/=10;
            num3/=10;
        }
        vector<int> va;
        int ans=0;
        for(int i=0; i<4; i++){
            int a=min(v1[i],v2[i]);
            int v=min(a,v3[i]);
           va.push_back(v);
        }
        for(int i=0; i<4; i++){
            ans+=pow(10,i)*va[i];
        }
        return ans;
    }
};