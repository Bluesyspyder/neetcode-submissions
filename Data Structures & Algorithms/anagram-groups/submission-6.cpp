class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {

        unordered_map<string,vector<string>> mpp;
        vector<vector<string>> ans;
        for(string s : str){
            string key = s;
            sort(key.begin(),key.end());
            mpp[key].push_back(s);
        }

        for(auto& i:mpp){
            ans.push_back(i.second);
        }

        return ans;
    }
};