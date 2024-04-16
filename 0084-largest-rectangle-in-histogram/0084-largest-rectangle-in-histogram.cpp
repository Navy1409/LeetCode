class Solution {
private:
    vector<int> nextSmaller( vector<int>a, int n){
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);
        for(int i=n-1; i>=0; i--){
            int curr=a[i];
            while(s.top()!=-1 && a[s.top()]>=curr){
                s.pop();
            }
            ans[i]=s.top();
            s.push(i);
        }
        return ans;
    }
    vector<int> prevSmaller( vector<int>a, int n){
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);
        for(int i=0; i<n; i++){
            int curr=a[i];
            while(s.top()!=-1 && a[s.top()]>=curr){
                s.pop();
            }
            ans[i]=s.top();
            s.push(i);
        }
        return ans;
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        int n= heights.size();
        vector<int> nextS;
        nextS = nextSmaller( heights, n);
        vector<int> prevS;
        prevS = prevSmaller( heights, n);
        int ans=INT_MIN;
        for(int i=0; i<n; i++){
            int l= heights[i];
            if(nextS[i]==-1){
                nextS[i]=n;
            }
            int b= nextS[i]-prevS[i]-1;
            int area= l*b;
            ans=max(area, ans);
        }
        return ans;        
    }
};