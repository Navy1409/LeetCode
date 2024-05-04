class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int maxi=INT_MIN, ans, i=1;
        while(arr[i]>arr[i-1]){
            i++;
        }
        return i-1;
    }
};