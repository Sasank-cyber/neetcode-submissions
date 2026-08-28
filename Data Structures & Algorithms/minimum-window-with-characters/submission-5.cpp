class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> kpp;
        unordered_map<char,int> kpl;

        for(char c:t){
            kpp[c]++;
        }

        int l = 0;
        int r = 0;
        int minLen = INT_MAX;
        int minStart = 0;
        
        while(r<s.size()){
            kpl[s[r]]++;
            bool found = true;

            for(auto[ch,fre] : kpp){
                if(kpl[ch] < fre){
                    found = false;
                    break;
                }
            }
            
        
            while(found && l<=r){

                if (r - l + 1 < minLen) {
                    minLen = r - l + 1;
                    minStart = l;
                }
                kpl[s[l]]--;
                if(kpl[s[l]] == 0){
                    kpl.erase(s[l]);
                }

                l++;
                found = true;
                
                for(auto[ch,fre] : kpp){
                    if(kpl[ch] < fre){
                        found = false;
                        
                        break;
                    }
                }
            }
            r++;
            
        
        
                      
 
    }
    string blank = "";
    if (minLen == INT_MAX) {
        return blank;
    }
    else{
        return s.substr(minStart, minLen);
    }
  
    
}
        
    
};
