class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;

        for(int x : nums){
            mpp[x]++;
        }

        int m = 0,x;
        vector<int> max;

        for(int i=0;i<k;i++){
            m=0;
            for(auto& k : mpp){
               if(k.second>m){m=k.second;x=k.first;} 
            }
            mpp.erase(x);
            max.push_back(x);
        }
        return max;
    }
};
