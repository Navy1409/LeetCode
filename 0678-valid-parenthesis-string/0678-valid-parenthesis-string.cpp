// class Solution {
// public:
//     bool checkValidString(string s) {
//         int starCount=0, ob=0, cb=0;
//         int len= s.size();
//         for(int i=0; i<len; i++){
//             if(s[i]=='('){
//                 ob++;
//             }
//             else if(s[i]==')'){
//                 cb++;
//             }
//             else if(s[i]=='*'){
//                 starCount++;
//             }
//         }
//         cout<<ob<<" "<<cb<<" "<<starCount;
//         if(ob==cb){
//             return true;
//         }
//         if(abs(ob-cb)<=starCount){
//             return true;
//         }
//         return false;

//     }
// };

#include <iostream>
#include <string>
#include <stack>

class Solution {
public:
    bool checkValidString(std::string s) {
        std::stack<int> openStack, starStack;
        
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(') {
                openStack.push(i);
            } else if (s[i] == '*') {
                starStack.push(i);
            } else { // s[i] == ')'
                if (!openStack.empty()) {
                    openStack.pop();
                } else if (!starStack.empty()) {
                    starStack.pop();
                } else {
                    return false; // No matching '(' or '*' found
                }
            }
        }
        
        while (!openStack.empty() && !starStack.empty()) {
            if (openStack.top() > starStack.top()) {
                return false; // '*' appears after '('
            }
            openStack.pop();
            starStack.pop();
        }
        
        return openStack.empty();
    }
};
