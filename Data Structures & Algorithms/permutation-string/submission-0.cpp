class Solution {
public:
    bool checkInclusion(string s1, string s2) {
              


        // string s1 = "abc";
        // string s2 =  "lecabee";

        vector<char> h1(26,0);
        vector<char> h2(26,0);

        if(s1.size()>s2.size()){
            return false;
        }
        // int i = 10;
        int l = 0;
        int r = 0;
        for(char c: s1){
            h1[c-'a']++;
        }



        while(r<s2.size()){
            if(r-l>s1.size()-1){
                h2[s2[l] - 'a']--;
                l++;
                
            } 

            h2[s2[r] - 'a']++;
            if(h1 == h2){
                return true;                
                break;
        }
            r++;    

            
    }
    return false;
    


    


       
    }
        
            
    
};
