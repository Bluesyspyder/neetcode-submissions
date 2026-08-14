class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;

        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }

        int max=0,m=0;

        for(auto& x:mpp){
            if(max<x.second){
                max = x.second;
                m = x.first;
            }
        }
        return m;
    }
};