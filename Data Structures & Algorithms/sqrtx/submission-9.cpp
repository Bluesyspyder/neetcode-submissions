class Solution {
public:
    int mySqrt(int x) {
        int l=0,r=x;
        int m = (l+r)/2;
        int ans=0;

        while(l<=r){
            m = (l+r)/2;
            if(1LL*m*m < x){
                ans = m;
                l=m+1;
            }
            else if(1LL*m*m > x){r=m-1;}
            else{return m;}
        }


        return ans;
    }
};