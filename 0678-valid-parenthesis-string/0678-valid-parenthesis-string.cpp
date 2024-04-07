#include <iostream>
#include <string>

class Solution {
public:
    bool checkValidString(std::string s) {
        int starCount = 0, ob = 0;

        for (char ch : s) {
            if (ch == '(') {
                ob++;
            } else if (ch == '*') {
                starCount++;
            } else {
                if (ob != 0) {
                    ob--;
                } else if (starCount != 0) {
                    starCount--;
                } else {
                    return false;
                }
            }
        }

        if (ob > starCount) {
            return false;
        }

        return true;
    }
};


// #include <iostream>
// #include <string>
// #include <stack>

// class Solution {
// public:
//     bool checkValidString(std::string s) {
//         std::stack<int> openStack, starStack;
        
//         for (int i = 0; i < s.size(); ++i) {
//             if (s[i] == '(') {
//                 openStack.push(i);
//             } else if (s[i] == '*') {
//                 starStack.push(i);
//             } else { // s[i] == ')'
//                 if (!openStack.empty()) {
//                     openStack.pop();
//                 } else if (!starStack.empty()) {
//                     starStack.pop();
//                 } else {
//                     return false; // No matching '(' or '*' found
//                 }
//             }
//         }
        
//         while (!openStack.empty() && !starStack.empty()) {
//             if (openStack.top() > starStack.top()) {
//                 return false; // '*' appears after '('
//             }
//             openStack.pop();
//             starStack.pop();
//         }
        
//         return openStack.empty();
//     }
// };
