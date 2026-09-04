class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;
        int ans=0;int j=0;

        for(int i=0;i<operations.size();i++){
            if(operations[i]=="+"){record.push_back(
                record[j-1]+record[j-2]
            );j++;}
            else if(operations[i]=="D"){record.push_back(record[j-1]*2);j++;}
            else if(operations[i]=="C"){record.pop_back();j--;}
            else{record.push_back(stoi(operations[i]));j++;}
        }

        for(auto s : record){ans += s;}

        return ans;
    }
};