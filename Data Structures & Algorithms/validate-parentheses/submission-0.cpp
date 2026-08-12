class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char,char> po = {{')','('},{'}','{'},{']','['}};

        // stack<char> st;

        for(char t:s){
            if(po.count(t)){
                if(!st.empty() && st.top() == po[t]){
                    st.pop();
                }
                else{
                    return false;
                }

            }
            else{
                st.push(t);
            }
        }
        return st.empty();

        
    }
};
