class Solution {
public:
    int trap(vector<int>& height) {
        int last = height.size();
        if(last<=1){
            return 0;
        }
        int f = 0;
        while (height[f] == 0) {
            f++;
        }
        int sum = 0;
        for (int i = f; i < last - 1; i++) {
            int l = i, r = i + 1;
            while (height[r] < height[l] && r < last) {
                r++;
            }
            if (r < last) {
                for (int j = l + 1; j < r; j++) {
                    sum += abs(height[j] - height[l]);
                }
                i = r-1;
            }
        }
        return sum;
    }
};