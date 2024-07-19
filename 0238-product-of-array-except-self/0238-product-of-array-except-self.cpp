class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);
        
        // Temporary arrays to store the products
        vector<int> left(n, 1), right(n, 1);

        // Calculate the products of all elements to the left of each element
        for (int i = 1; i < n; ++i) {
            left[i] = left[i - 1] * nums[i - 1];
        }

        // Calculate the products of all elements to the right of each element
        for (int i = n - 2; i >= 0; --i) {
            right[i] = right[i + 1] * nums[i + 1];
        }

        // Calculate the result by multiplying left and right products
        for (int i = 0; i < n; ++i) {
            ans[i] = left[i] * right[i];
        }

        return ans;
    }
};
