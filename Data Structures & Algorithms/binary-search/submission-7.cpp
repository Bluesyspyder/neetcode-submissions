class Solution {
public:
    int binarysearch(int left,int right,vector<int>& nums,int target){
        int mid = (left+right)/2;

        if(left>right){return -1;}

        if(nums[mid] < target){
            return binarysearch(mid+1,right,nums,target);
        }
        else if(nums[mid] == target){return mid;}
        else{
            return binarysearch(left,mid-1,nums,target);
        }
        
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int x = binarysearch(0,n-1,nums,target);

        return x;
    }
};
