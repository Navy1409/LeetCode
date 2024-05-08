class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> a = score;
        sort(a.begin(), a.end(), greater<int>());
        long long len = a.size();
        vector<string> s(len);
        for (long long i = 0; i < len; i++) {
            auto it = find(score.begin(), score.end(), a[i]);
            long long in = it - score.begin();
            if (i < 3) {
                if (i == 0) {
                    s[in] = "Gold Medal";
                } else if (i == 1) {
                    s[in] = "Silver Medal";
                } else if (i == 2) {
                    s[in] = "Bronze Medal";
                }
            } else {
                s[in] = to_string(i + 1);
            }
        }
        return s;
    }
};