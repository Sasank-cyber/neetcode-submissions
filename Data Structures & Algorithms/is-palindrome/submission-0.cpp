class Solution {
public:
    bool isPalindrome(string s) {
        string ne;


        for(int i=0;i<s.size();i++){
            if(iswalnum(s[i])){
             ne.push_back(tolower(s[i]));
            }
         
        }
        int left = 0;
        int right = ne.size()-1;
        
        
        
        // bool is_;
        while(left < right){
            if (ne[left] != ne[right]) {
                // is_ = false;
                return false;
                
            }
            left++;
            right--;
        }
        // is_ = true;
        
        // if(is_){
        // return true;
        // }
        // else{
        //     return false;
        // } 

        return true; 
        

    
};
        
};
