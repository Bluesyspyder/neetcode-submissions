class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int mx=0;
        int ans=INT_MAX;
        for(int c : piles){mx = max(mx,c);}

        int left = 1,right = mx;

        while(left<right){
            int time=0;
            int middle = (left+right)/2;

            for(int i=0;i<piles.size();i++){
                time += ceil((double)piles[i]/middle);
            }

            if(time <= h){right=middle;}
            else if(time > h){left=middle+1;}
        }

        return left;
    }
};
