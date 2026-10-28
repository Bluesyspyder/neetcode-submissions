class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int mx=0,sum=0,ans=INT_MAX;
        int n = weights.size();

        for(int c : weights){mx = max(mx,c);sum += c;}

        int left = mx,right = sum;
        while(left <= right){
            int m = (left+right)/2;
            int j=1,s=0,time=1;
            for(int i=0;i<n;i++){
                s += weights[i];
                if(s > m){s=weights[i];time++;}
            }
            if(time > days){left = m+1;}
            else if(time <= days){right=m-1;ans = min(ans,m);}
        }

        return ans;
    }
};