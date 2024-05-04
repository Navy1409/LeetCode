// class Solution {
// public:
//     int numRescueBoats(vector<int>& people, int limit) {
//         int len=people.size(), w=0, c=0;
//         sort(people.begin(), people.end());
//         for(int i=0; i<len; i++){
//             int w=0, n=0;
//             while(w<=limit && n<2 && i<len){
//                 w+=people[i];
//                 i++;
//                 n++;
//             }
//             i--;
//             c++;
//         }
//         return c;
//     }
// };

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int len = people.size(), c = 0;
        sort(people.begin(), people.end());
        int i = 0, j = len - 1;
        while (i <= j) {
            if (people[i] + people[j] <= limit) {
                i++;
            }
            j--;
            c++;
        }
        return c;
    }
};
