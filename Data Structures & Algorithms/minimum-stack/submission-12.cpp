class MinStack {
    stack<int> s;
    stack<int> minstack;
    int min = INT_MAX;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(min > val){
            min = val;
        }
        minstack.push(min);

        s.push(val);
    }
    
    void pop() {
        s.pop();
        minstack.pop();
        if(!minstack.empty()){
            min = minstack.top();
        }
        else{min = INT_MAX;}
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return minstack.top();
    }
};
