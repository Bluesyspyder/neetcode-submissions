class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int max=0;

        int left=0,right=n-1;

        while(left<right){
            int w = right - left;
            int h = min(height[left],height[right]);
            int area = h*w;

            if(area > max){
                max = area;
            }

            // we need to check the height only as the width decreases regardless
            if(height[left]>height[right]){right--;}
            else{left++;}
            
        }
        return max;
    }
};
