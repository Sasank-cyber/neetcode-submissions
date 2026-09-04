class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int t = 0;
        int b = matrix.size()-1;
        
        int row = -1;

        while(t<=b){
            int mid = t + ((b-t)/2);
            
        

            if (target > matrix[mid].back()) {
                t = mid + 1;
            }
            else if (target < matrix[mid][0]) {
                b = mid - 1;
            }
            else {
                row = mid;
                break;
            }       
            
        }
        if(row == -1){
            return false;
        }
        int l = 0;
        int h = matrix[0].size()-1;

        while(l<=h){
            int mi = l+((h-l)/2);
            if(target == matrix[row][mi]){
                return true;

            }
            else if(target > matrix[row][mi]){
                l = mi +1;

        }
        else{
            h = mi -1;
        }
        }
        return false;  
            
}};
