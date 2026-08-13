class Solution {
public:
    // string longestCommonPrefix(vector<string>& strs) {
    //     string ans = "";
    //     int n = strs.size();

    //     for(int j = 0; j < strs[0].length(); j++) {

    //         for(int i = 1; i < n; i++) {

    //             if(j >= strs[i].length() || strs[0][j] != strs[i][j]) {
    //                 return ans;
    //             }
    //         }

    //         ans += strs[0][j];
    //     }

    //     return ans;
    // }

    string longestCommonPrefix(vector<string>& strs){
        string ans="";
        int n = strs.size();

        for(int i=0;i<strs[0].length();i++){
            for(int j=0;j<n;j++){
                if((i >= strs[j].length())||(strs[0][i] != strs[j][i])){return ans;}
            }
            ans += strs[0][i];
        }
        return ans;
    }
};