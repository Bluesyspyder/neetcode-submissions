class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i=0;
        int n = nums.size();
        int j = (n-1>k)?k:n-1;


        while(j<nums.size()){
            unordered_map<int,int> mpp;
            for(int k=i;k<=j;k++){
                mpp[nums[k]]++;
            }

            for(auto x : mpp){
                if(x.second>1){return true;}
            }
            
            i++;j++;
        }
        return false;
    }
};