class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int t) {
        int row = m.size();
        if (row == 0) {
            return false;
        }

        int col = m[0].size();
        if (col == 0) {
            return false;
        }

        int index = -1;
        for (int i = 0; i < row; i++) {
            if (m[i][0] <= t && m[i][col - 1] >= t) {
                index = i;
                break;
            }
        }

        if (index == -1) {
            return false; // t is outside the range of all rows
        }

        for (int i = 0; i < col; i++) {
            if (m[index][i] == t) {
                return true;
            }
        }

        return false;
    }
};
