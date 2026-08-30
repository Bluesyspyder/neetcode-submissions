class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mx=0;
        int i=0,j=1;

        while(i<j && j<n){
            if(prices[j]>prices[i]){
                mx = max(mx,prices[j]-prices[i]);
            }
            else{
                i=j;
            }
            j++;
        }
        return mx;
    }
};
