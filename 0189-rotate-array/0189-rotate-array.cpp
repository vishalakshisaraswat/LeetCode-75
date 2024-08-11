class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> ans(nums.size());
        k = k%(nums.size());
        int s=0;
        for(int i=nums.size()-k; i<nums.size(); i++){
            ans[s++] = nums[i];
        }
        for(int i=0;i<nums.size()-k;i++){
            ans[s++] = nums[i];
        }

        for(int i=0; i<nums.size(); i++){
            nums[i]=ans[i];
        }
    }
};