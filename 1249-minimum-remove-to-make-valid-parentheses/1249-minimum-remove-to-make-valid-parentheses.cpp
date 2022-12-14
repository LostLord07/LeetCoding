class Solution {
public:
    
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        for (int i = 0;i<s.size();i++){
            if (st.size() == 0 && s[i] == ')') {s[i] = '*';}
            else if (s[i] == ')'){
                st.pop();
            } else if (s[i] == '('){
                st.push(i);
            }
        }
        
        while (st.size()>0){
            s[st.top()] = '*';
            st.pop();
        }
        
        s.erase(remove(s.begin(), s.end(), '*'), s.end());
        return s;
    }
};