class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        unordered_map<int,int> mpp;
        int ans = 0;

        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }

        for(int i=0;i<n;i++){
            if(mpp.find(nums[i]-1) == mpp.end()){
                int count = 1;
                int x = nums[i];
                while(mpp.find(x+count) != mpp.end()){
                    count++;
                }
                ans = max(ans,count);
            }
        }

        return ans;
    }
};
