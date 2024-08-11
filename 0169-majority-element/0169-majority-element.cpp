class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int main=0,c=0;
        
        for(int n : nums){
            if(c == 0)
                main = n;
            c += (main == n) ? 1 : -1;
        }
        
        return main;
        
    }
};