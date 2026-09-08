class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        int ans=0;
        stack<int> s;

        for(int i=0;i<n;i++){
            if(tokens[i] == "+"){
                int first = s.top();
                s.pop();
                int second = s.top();
                s.pop();

                ans = first + second;
                s.push(ans);
            }
            else if(tokens[i] == "-"){
                int first = s.top();
                s.pop();
                int second = s.top();
                s.pop();

                ans = second-first;
                s.push(ans);
            }
            else if(tokens[i] == "*"){
                int first = s.top();
                s.pop();
                int second = s.top();
                s.pop();

                ans = first * second;
                s.push(ans);
            }
            else if(tokens[i] == "/"){
                int first = s.top();
                s.pop();
                int second = s.top();
                s.pop();

                ans = second/first;
                s.push(ans);
            }
            else{s.push(stoi(tokens[i]));}
            
        }

        return s.top();
    }
};
