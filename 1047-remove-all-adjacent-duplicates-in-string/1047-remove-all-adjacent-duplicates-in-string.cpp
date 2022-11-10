class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for (int i =0;i<s.size();i++){
            if (st.size() == 0 || st.top() != s[i]){
                st.push(s[i]); continue;
            }
            while(st.size()>0 && st.top()==s[i])
            {
                st.pop();
            }
        }
        
        s.clear();
        while(st.size()){
            s+= st.top(); st.pop();
        }
        reverse(s.begin(), s.end());
        return s;
    }
};