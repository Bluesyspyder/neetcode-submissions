class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size(),i=0,j=0;
        vector<int> ans;
        for(int i=0;i<=n-2;i++){
            for(int j=i+1;j<=n-1;j++){
                if(nums[i] + nums[j] == target){ans.push_back(i);ans.push_back(j);}
            }
        }
        return ans;
    }
};
