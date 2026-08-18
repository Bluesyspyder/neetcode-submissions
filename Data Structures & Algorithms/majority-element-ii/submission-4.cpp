class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;

        for(int x : nums){
            mpp[x]++;
        }

        int n = nums.size();
        int k = n/3;
        vector<int> ans;
        for(auto x : mpp){
            if(x.second>k){ans.push_back(x.first);}
        }
        return ans;
    }
};