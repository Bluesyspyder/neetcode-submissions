class TimeMap {
    unordered_map<string,vector<pair<int,string>>> mpp;

public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mpp[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        if(mpp.find(key) == mpp.end()){
            return "";
        }

        string ans = "";
        for(auto &s : mpp[key]){
            if(s.first <= timestamp){
                ans = s.second;
            }
            else{break;}
        }

        return ans;
    }
};
