class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string cc = strs[0];

        for(int i=1;i<strs.size();i++){
            int j=0;
            for(;j < strs[i].size();j++){
                if(cc[j] != strs[i][j]){
                    break;
                }
                
            }
            cc = cc.substr(0,j);

            if(cc == "") return "";
        }
        return cc;
        
    }
};