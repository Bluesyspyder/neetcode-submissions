class Solution {
public:
    string decodeString(string s) {
        stack<char> st;

        for(char c : s) {
            if(c == ']') {
                stack<char> temp;
                string curr = "";

                while(st.top() != '[') {
                    temp.push(st.top());
                    st.pop();
                }

                while(!temp.empty()) {
                    curr += temp.top();
                    temp.pop();
                }

                st.pop();

                string num = "";

                while(!st.empty() && isdigit(st.top())) {
                    num += st.top();
                    st.pop();
                }

                reverse(num.begin(), num.end());

                int x = stoi(num);

                string d = curr;

                for(int i = 1; i < x; i++) {
                    curr += d;
                }

                for(char ch : curr) {
                    st.push(ch);
                }
            }
            else {
                st.push(c);
            }
        }

        string ans = "";
        stack<char> temp;

        while(!st.empty()) {
            temp.push(st.top());
            st.pop();
        }

        while(!temp.empty()) {
            ans += temp.top();
            temp.pop();
        }

        return ans;
    }
};