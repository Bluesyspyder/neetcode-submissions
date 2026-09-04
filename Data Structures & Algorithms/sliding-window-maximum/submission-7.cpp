class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> ans;
        int mx = INT_MIN;
        int left=0,right=k-1;

        for(int i=left;i<=right;i++){
            mx=max(mx,nums[i]);
        }

        ans.push_back(mx);
        left++;right++;

        while(right<n){
            if(nums[left-1]==mx){
                mx = INT_MIN;

                for(int i=left;i<=right;i++){
                    mx=max(mx,nums[i]);
                }
            }
            else{
                mx = max(mx,nums[right]);
            }
            ans.push_back(mx);
            left++;
            right++;
        }

        return ans;
    }
};
