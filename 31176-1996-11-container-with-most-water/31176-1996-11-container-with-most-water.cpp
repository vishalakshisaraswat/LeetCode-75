class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea=0;
        int front=0;
        int back= height.size()-1;

        while(front<back){
            int h = min(height[front], height[back]);
            int w = back-front;
            int area=h*w;
            maxArea = max(maxArea,area);
            if(height[front]<height[back])
                front++;
            else
            back--;
        }
        return maxArea;
    }
};