class FreqStack {
    stack<int> st;
    unordered_map<int,int> mpp;
public:
    FreqStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        mpp[val]++;
    }
    
    int pop() {

        int maxfreq=0,val=-1;
        for(auto x : mpp){
            maxfreq = max(maxfreq, x.second);
        }

        vector<int> temp;

        while(!st.empty()){
            int curr = st.top();
            st.pop();

            if(mpp[curr] == maxfreq){
                val = curr;
                mpp[curr]--;
                break;
            }

            temp.push_back(curr);
        }

        for(int i=temp.size()-1;i>=0;i--){
            st.push(temp[i]);
        }


        return val;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */