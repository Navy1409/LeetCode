class Solution {
public:
    int minBitFlips(int s, int g) {
        int c=0;
        while( s || g){
            if(s%2 != g%2){
                c++;
            }
            s/=2;
            g/=2;
        }
        return c;
    }
};