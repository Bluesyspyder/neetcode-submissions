class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();
        int ans = INT_MAX;

        int left=0,right=n-1;

        while(left<=right){

            if(nums[left] <= nums[right]){
                ans = min(ans,nums[left]);
                break;
            }

            int m = (left+right)/2;
            ans = min(ans,nums[m]);
            if(nums[m] >= nums[left]){
                left = m+1;
            }
            else {
                right = m;
            }
        }

        return ans;
    }
};
