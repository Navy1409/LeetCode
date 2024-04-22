class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string q = "qwertyuiopQWERTYUIOP", a = "asdfghjklASDFGHJKL", z = "zxcvbnmZXCVBNM";
        vector<int> in;
        int cq = 0, ca = 0, cz = 0;
        for (int i = 0; i < words.size(); i++) {
            ca = 0;
            cq = 0;
            cz = 0;
            for (int j = 0; j < words[i].size(); j++) {
                if (find(q.begin(), q.end(), words[i][j]) != q.end() && !ca &&
                    !cz) {
                    cq++;
                } else if (find(a.begin(), a.end(), words[i][j]) != a.end() &&
                           !cq && !cz) {
                    ca++;
                } else if (find(z.begin(), z.end(), words[i][j]) != z.end() &&
                           !ca && !cq) {
                    cz++;
                } else {
                    ca = 0;
                    cq = 0;
                    cz = 0;
                    break;
                }
            }
            if (cq || ca || cz) {
                in.push_back(i);
            }
        }
        vector<string> ans;
        for (int i = 0; i < words.size(); i++) {
            if (find(in.begin(), in.end(), i) != in.end()) {
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};