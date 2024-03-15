class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        std::vector<int> product(n, 1); // Initialize the result vector with 1s

        int leftProduct = 1;
        for (int i = 0; i < n; i++) {
            product[i] *= leftProduct; // Update product[i] with leftProduct
            leftProduct *= nums[i]; // Update leftProduct for the next iteration
        }

        int rightProduct = 1;
        for (int i = n - 1; i >= 0; i--) {
            product[i] *= rightProduct; // Update product[i] with rightProduct
            rightProduct *=
                nums[i]; // Update rightProduct for the next iteration
        }

        return product;
    }
};