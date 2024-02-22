#include <vector>

class Solution {
public:
    int findJudge(int n, std::vector<std::vector<int>>& trust) {
        std::vector<int> trustCount(n + 1, 0);

        for (const auto& relation : trust) {
            trustCount[relation[0]]--; // Person i trusts someone, decrement trust count
            trustCount[relation[1]]++; // Person j is trusted, increment trust count
        }

        for (int i = 1; i <= n; ++i) {
            if (trustCount[i] == n - 1) {
                return i; // The person with n-1 trusts is the judge
            }
        }

        return -1; // No judge found
    }
};
