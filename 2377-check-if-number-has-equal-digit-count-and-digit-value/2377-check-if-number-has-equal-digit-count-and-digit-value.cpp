class Solution {
public:
    bool digitCount(string num) {
        int n = num.size();
        vector<int> count(10, 0);  // count of each digit 0–9

        // count frequency of each digit in num
        for (char c : num) {
            count[c - '0']++;
        }

        // check condition for each index
        for (int i = 0; i < n; i++) {
            int expected = num[i] - '0';  // what digit i expects
            if (count[i] != expected) {
                return false;
            }
        }

        return true;
    }
};
