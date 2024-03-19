class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int len = tasks.size();
        std::unordered_map<char, int> mp;
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
        int a=(maxFreq-1)*(n+1)+(c);
        a=max(a,len);
        return a;
    }
};