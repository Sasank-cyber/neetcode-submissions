class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size() - 1;
        vector<int> o;
        while(l < r){
            if(numbers[l] + numbers[r] > target){
                r--;
            }
            else if(numbers[l] + numbers[r] < target){
                l++;
            }       
            else if(numbers[l] + numbers[r] == target){
                o.push_back(l+1);
                o.push_back(r+1);  
                break;           
            }      
        } 
        return o;       
    }
};
