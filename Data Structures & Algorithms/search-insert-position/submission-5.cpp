class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        while(l<=r){
            int m = (l+r)/2;
            if(nums[m] < target){l=m+1;}
            else if(nums[m] > target){r = m-1;}
            else if(nums[m] == target){return m;}
            else if(l == r){
                if(nums[l] < target){return l;}
                else{return l;}
            }
        }
        return l;
    }
};