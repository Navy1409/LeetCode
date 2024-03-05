class Solution {
public:
    int minimumLength(string a) {
        int n=a.size();
        int i=0, j=n-1;
        while(i<j&&a[i]==a[j]){
            char el=a[i];
            while(a[i]==el&&i<=j){
                i++;
            }
            while(a[j]==el&&i<j){
                j--;
            }
        }
        return j-i+1;
    }
};