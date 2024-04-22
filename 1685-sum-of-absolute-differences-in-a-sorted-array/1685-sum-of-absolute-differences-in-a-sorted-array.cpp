#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int len = nums.size();
        vector<int> prefixSum(len);
        vector<int> ans(len);

        prefixSum[0] = nums[0];
        for (int i = 1; i < len; i++) {
            prefixSum[i] = prefixSum[i - 1] + nums[i];
        }

        int totalSum = prefixSum[len - 1];
        for (int i = 0; i < len; i++) {
            int leftSum = (i == 0) ? 0 : prefixSum[i - 1];
            int rightSum = totalSum - prefixSum[i];

            ans[i] = (i * nums[i] - leftSum) + (rightSum - (len - i - 1) * nums[i]);
        }

        return ans;
    }
};
