class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool found = false;

        for(int i=0;i<matrix.size();i++){
            
            found = binary_search(matrix[i].begin(),matrix[i].end(),target);
            if(found){
                return true;
            }

        }
        return false;
        
        
    }
};
