// class Solution {
// public:
//     int numSteps(string s) {
//         int num= stoi(s, NULL, 2);
//         int c=0;
//         while(num!=1){
//             if(num%2==0){
//                 num/=2;
//                 c++;
//             }
//             else{
//                 num+=1;
//                 c++;
//             }
//         }
//         return c;
//     }
// };

class Solution {
public:
    int numSteps(string s) {
        int carry = 0, steps = 0;
        for(int i = s.length() - 1; i > 0; i--) {
            if((s[i] - '0') + carry == 1) {
                steps += 2;
                carry = 1;
            } else {
                steps++;
            }
        }
        return steps + carry;
    }
};