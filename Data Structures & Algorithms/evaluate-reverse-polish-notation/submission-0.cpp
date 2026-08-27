class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> kl;
        for(string token:tokens){
            if(token != "+" &&  token != "-"&&token != "/"&&token != "*"){
                kl.push(token);            
            }
        

        else{
            int r = stoi(kl.top()); kl.pop();  // First pop
            int l = stoi(kl.top()); kl.pop();
            if(token == "+"){
                
                kl.push(to_string(r+l));
            } 
            else if(token == "-" ){
                kl.push(to_string(l-r));
            }
            else if(token == "*"){
                kl.push(to_string(l*r));

            } 
            else{
                kl.push(to_string(l/r));
            }
            
        }
    }
    return stoi(kl.top());
        
    
}
};
