class Solution {
public:

    vector<string> dummy_input = {"Hello","World"};
    vector<int> lenght;
    string result;
    
    vector<string> tring;

string encode(vector<string>& strs) {
        
        for(string s:strs){
            lenght.push_back(s.size());
            result += s;
            
        }
        // res = stoi(result);
        return result;

    }

    vector<string> decode(string s) {
        int track = 0;
        for(int i:lenght){
            tring.push_back(s.substr(0+track,i));
            track+=i;
        }
        return tring;
    };
};
