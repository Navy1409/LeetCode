class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n = s.size();
        int i = 0, j = n - 1;
        while (i <= j) {
            if (isalpha(s[i]) && isalpha(s[j])) {
                char ch = s[i];
                s[i] = s[j];
                s[j] = ch;
                i++;
                j--;
            } else if (isalpha(s[i])) {
                j--;
            } else {
                i++;
            }
        }
        return s;
    }
};