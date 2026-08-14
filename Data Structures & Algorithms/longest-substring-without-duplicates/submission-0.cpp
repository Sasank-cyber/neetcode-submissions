class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = 0;
        int max_l = 0;
        
        unordered_set<int> dup;
        
        while(r<s.size()){
            if(dup.count(s[r]) != 1){
                dup.insert(s[r]);
                r++;
                int len = r-l;
                max_l = max(len,max_l);
            }
            else{
                
                dup.erase(s[l]);            
                l++;
            }
            
        }
    return max_l;
    }
};
