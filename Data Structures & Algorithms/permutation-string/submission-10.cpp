class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> p,mpp;

        int n1=s1.length(),n=s2.length();
        if(n1>n){return false;}

        for(char c : s1){p[c]++;}

        int left=0;

        for(int right=0;right<n;right++){
            mpp[s2[right]]++;

            while(right-left+1 > n1){
                mpp[s2[left]]--;
                if(mpp[s2[left]]==0){mpp.erase(s2[left]);}
                left++;
            }

            if(mpp == p){return true;} 
        }
        return false;
    }
};
