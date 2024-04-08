class Solution {
public:
    long long reverse(long long x) {
        if(x>pow(2, 31)-1){
            return 0;
        }
        long long n=x;
        vector<long long> nums;
        while(n){
            nums.push_back(n%10);
            n=n/10;
        }
        long long c=nums.size()-1;
        long long num=0;
        for(long long i: nums){
            num+=i*pow(10,c);
            c--;
        }
        return num;
    }
};