class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> orderMap;
    for (int i = 0; i < order.size(); i++) {
        orderMap[order[i]] = i;
    }

    vector<pair<int, char>> sortedChars;
    for (char c : s) {
        sortedChars.push_back({orderMap[c], c});
    }

    sort(sortedChars.begin(), sortedChars.end());

    string ans;
    for (const auto& p : sortedChars) {
        ans += p.second;
    }

    return ans;
    }
};