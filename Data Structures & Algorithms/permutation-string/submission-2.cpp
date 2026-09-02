class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> p;

        int n1 = s1.length(),n=s2.length();
        if(n1>n){return false;}

        for(char c : s1){p[c]++;}

        bool ans=false;
        int left=0,right=n1-1;
        

        while(right<n){
            unordered_map<char,int> mpp;
            for(int i = left;i<=right;i++){
                mpp[s2[i]]++;
            }

            if(p == mpp){ans=true;break;}
            left++;right++;
        }
        return ans;
    }
};
