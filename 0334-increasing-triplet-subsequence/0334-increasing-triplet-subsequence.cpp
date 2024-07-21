class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX, second = INT_MAX;
        for (int num : nums) {
            if (num <= first) {
                first = num;  // Update first if num is smaller than first
            } else if (num <= second) {
                second = num;  // Update second if num is greater than first but smaller than second
            } else {
                return true;  // Return true if we find a number greater than both first and second
            }
        }
        return false;  // If no such triplet is found, return false
    }
};
