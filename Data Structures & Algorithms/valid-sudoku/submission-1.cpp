class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        vector<set<char>> row(9);
        vector<set<char>> column(9);
        vector<set<char>> box_in(9);
        
        
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board.size();j++){
                char val = board[i][j];
                
                int box_index = (3*(i/3))+(j/3);
                if(val == '.') continue;
                
                if(row[i].count(val) ||
                column[j].count(val) ||
                box_in[box_index].count(val)) {

                    // cout << "False\n";
                    return false;
                }

                row[i].insert(val);
                column[j].insert(val);
                box_in[box_index].insert(val);      
            
            
        
            }
            
                
            }
            // cout << "Valid";
            return true;
        }; 
            
        
};
