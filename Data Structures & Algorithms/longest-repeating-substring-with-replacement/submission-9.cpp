class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        unordered_map<char,int> freq;

        int ans=0,maxfreq=0,left=0;

        for(int right=0;right<n;right++){
            freq[s[right]]++;
            maxfreq = max(maxfreq,freq[s[right]]);

            while((right-left+1 - maxfreq) > k){
                freq[s[left]]--;
                left++;
            }

            ans = max(ans,right-left+1);
        }
        return ans;
    }
};
