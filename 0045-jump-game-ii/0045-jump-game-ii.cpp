class Solution {
public:
    int jump(vector<int>& nums) {
        int i=0,jumps=0;
        int n=nums.size();
        if(n<=1)
            return 0;
        int current = 0;
        int farthest = 0;
        
        for(int i=0; i<n; i++){
            farthest = max(farthest , i+nums[i]);

            if(i == current){
                jumps++;
                current=farthest;

                if(current >= n-1)
                    break;
            }
        }
        return jumps;
    }
};