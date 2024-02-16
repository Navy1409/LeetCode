class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int, int> m;
        vector<int> temp;
        int n= arr.size(), ans=0;
        for(int i=0; i<n; i++){
            m[arr[i]]++;
        }
        for(auto i: m){
            temp.push_back(i.second);
        }
        sort(temp.begin(), temp.end());
        for(int i=0; i<temp.size(); i++){
            k-=temp[i];
            if(k<0){
                ans=i-1;
                break;
            }
            else if(k==0){
                ans=i;
                break;
            }
        }
        ans=(temp.size()-1-ans);
        return ans;
    }
};