class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length()){return false;}

        unordered_map<char,int> mpp,mpp1;
        int n = s.length();
        for(int i=0;i<n;i++){
            mpp[s[i]]++;
            mpp1[t[i]]++;
        }

    if(mpp1 == mpp){return true;}
    return false;        

        
    }
};
