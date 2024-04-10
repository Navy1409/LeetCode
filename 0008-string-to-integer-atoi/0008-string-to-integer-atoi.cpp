class Solution {
public:
    int myAtoi(string s) {
        int len = s.size();
        int ans = 0;
        int i = 0;
        int flag = 0;

        // Skip leading spaces
        while (i < len && s[i] == ' ') {
            i++;
        }

        // Handle sign
        if (i < len && (s[i] == '+' || s[i] == '-')) {
            flag = (s[i] == '-') ? 1 : 0;
            i++;
        }

        // Extract digits and calculate result
        while (i < len && isdigit(s[i])) {
            int digit = s[i] - '0';
            // Check for overflow
            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digit > 7)) {
                return flag ? INT_MIN : INT_MAX;
            }
            ans = ans * 10 + digit;
            i++; // Increment loop index
        }

        // Apply sign
        if (flag) {
            ans *= -1;
        }

        return ans;
    }
};
