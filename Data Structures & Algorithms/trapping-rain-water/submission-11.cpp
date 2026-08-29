class Solution {
 public:
  int trap(vector<int>& height) {

    int n = height.size();
    int m=0;
    int ans=0;

    vector<int> left_max(n),right_max(n);

    for(int i=0;i<n;i++){
        if(height[i] > m){m = height[i];}
        left_max[i]=m;
    }
    m=0;
    for(int i=n-1;i>=0;i--){
        if(height[i] > m){m = height[i];}
        right_max[i]=m;
    }

    for(int i=1;i<n-1;i++){
        ans += max(0, min(left_max[i], right_max[i]) - height[i]);
    }

    return ans;
  }
};
