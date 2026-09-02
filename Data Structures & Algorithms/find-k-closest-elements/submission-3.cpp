class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<pair<int,int>> v;

        for(int a : arr) {
            v.push_back({a, abs(a-x)});
        }

        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            if(a.second == b.second)
                return a.first < b.first;

            return a.second < b.second;
        });

        vector<int> ans;

        for(int i = 0; i < k; i++) {
            ans.push_back(v[i].first);
        }

        sort(ans.begin(), ans.end());

        return ans;
    }
};