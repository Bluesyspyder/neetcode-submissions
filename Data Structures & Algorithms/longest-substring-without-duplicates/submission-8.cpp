class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if(n == 0) return 0;

        int start=0,end=1,mx=1;
        vector<char> temp;
        temp.push_back(s[start]);
 
        while(end<n){
            bool isduplicate = false;

            for(int i=0;i<temp.size();i++){
                if(temp[i] == s[end]){isduplicate=true;break;}
            }            
            if(isduplicate){temp.erase(temp.begin());start++;}
            else{temp.push_back(s[end]);end++;}
            mx=max(mx,(int)temp.size());
        }
        return mx;
    }
};
