class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int len = tasks.size();
        unordered_map<char, int> mp;
        for (int i = 0; i < len; i++) {
            mp[tasks[i]]++;
        }
        int maxFreq=0,c=0;
        for(auto i: mp){
            if(i.second>maxFreq){
                maxFreq=i.second;
                c=1;
            }
            else if( i.second== maxFreq){
                c++;
            }
        }
        int a=(maxFreq-1)*(n)+(c)+(maxFreq-1);
        a=max(a,len);
        return a;
    }
};