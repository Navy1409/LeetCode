class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i=1;
        while(arr[i]>arr[i-1]){
            i++;
        }
        return i-1;
    }
};