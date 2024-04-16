class Solution {
    private:
    vector<int> nextSmaller(vector<int> a, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);
        for (int i = n - 1; i >= 0; i--) {
            int curr = a[i];
            while (s.top() != -1 && a[s.top()] >= curr) {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    vector<int> prevSmaller(vector<int> a, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);
        for (int i = 0; i < n; i++) {
            int curr = a[i];
            while (s.top() != -1 && a[s.top()] >= curr) {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> nextS;
        nextS = nextSmaller(heights, n);
        vector<int> prevS;
        prevS = prevSmaller(heights, n);
        int ans = -1;
        for (int i = 0; i < n; i++) {
            if (nextS[i] == -1) {
                nextS[i] = n;
            }
            ans = max((heights[i] * (nextS[i] - prevS[i] - 1)), ans);
        }
        return ans;
    }

public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix[0].size();
        vector<int> heights(n,0);
        int ans = -1;
        for (int i = 0; i < matrix.size(); i++) {
            for(int j=0; j<n;j++ ){
                if(matrix[i][j]=='1'){
                    heights[j]++;
                }
                else{
                    heights[j]=0;
                }
            }
            ans=max(ans, largestRectangleArea(heights));
        }
        return ans;
    }
};