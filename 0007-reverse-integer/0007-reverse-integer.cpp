class Solution {
public:
    int reverse(int x) {
        int n=x;
        vector<int> nums;
        while(n){
            nums.push_back(n%10);
            n=n/10;
        }
        int c=nums.size()-1;
        int num=0;
        for(int i: nums){
            num+=i*pow(10,c);
            c--;
        }
        if(num>pow(2, 31)-1||num<pow(-2, 31)){
            return 0;
        }
        return num;
    }
};