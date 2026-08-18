class Solution {
public:
    void merge(vector<int>& nums,int low,int mid,int high){
        int i=low,j=mid;
        vector<int> ans;

        while(i<mid && j<high){
            if(nums[i] <= nums[j]){
                ans.push_back(nums[i]);
                i++;
            }
            else{ans.push_back(nums[j]);j++;}
        }
        while(i<mid){
            ans.push_back(nums[i]);i++;
        }
        while(j<high){
            ans.push_back(nums[j]);j++;
        }

        for(int k=0;k<ans.size();k++){
            nums[low+k] = ans[k];
        }
    }
    
    void ms(vector<int>& nums,int low,int high){
        int mid = (high+low)/2;

        if(high - low <= 1) {return;}

        ms(nums,low,mid);
        ms(nums,mid,high);

        merge(nums,low,mid,high);
    }
    void sortColors(vector<int>& nums) {
        ms(nums,0,nums.size());
    }
};