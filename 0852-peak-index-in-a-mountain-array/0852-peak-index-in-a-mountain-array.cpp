class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0, e=arr.size()-1;
        int m;
        while(s < e){
            m = s + (e - s) / 2;
            if(arr[m] < arr[m+1]){
                s = m + 1;
            }
            else{
                e = m;
            }
        }
        return s;
    }
};
