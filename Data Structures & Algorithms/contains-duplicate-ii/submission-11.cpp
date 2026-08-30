class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i=0;
        int n = nums.size();
        int max = (n-1>k)?k:n-1;


        while(max<nums.size()){
            unordered_map<int,int> mpp;
            for(int k=i;k<=max;k++){
                mpp[nums[k]]++;
            }

            for(auto x : mpp){
                if(x.second>1){return true;}
            }
            
            i++;max++;
        }
        return false;
    }
};