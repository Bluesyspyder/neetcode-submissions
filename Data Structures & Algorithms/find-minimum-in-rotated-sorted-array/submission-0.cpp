class Solution {
public:
    int findMin(vector<int> &nums) {
        int mn = INT_MAX;

        for(int c : nums){mn = min(mn,c);}

        return mn;
    }
};
