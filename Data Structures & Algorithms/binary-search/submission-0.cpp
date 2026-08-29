class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n = arr.size();
        int mid = 0;
        // int target = 8;
        int l = 0;
        int r = n-1;

        while(l<=r){
            mid = l+(r-l)/2;

            if(arr[mid] == target){
                return mid;
                break;
            }
            else if(target > arr[mid]){
                l = mid+1;
                
                
            }
            else{
                r = mid-1;
            }
        }

        return -1;
        
    }
};
