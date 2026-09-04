class Solution {
public:
    long long check_time(vector<int> piles, long long k_min){
        long long time = 0;

        for(int i = 0; i < piles.size(); i++){
            time += ceil((double)piles[i] / k_min);
        }
             
        return time;

    };

    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 0;
        long long int max_in = 0;
        long long int sum = accumulate(piles.begin(),piles.end(),0);
        // int r = piles.size()-1;
        int time = 0;
        long long int k_min = ceil((double)sum/(double)h);
        long long int k_max = *max_element(piles.begin(),piles.end());
        // cout << k_min;
        long long int ans = k_max;
        while(k_min <= k_max){
            long long int mid = k_min + ((k_max-k_min)/2);
            if(check_time(piles, mid) <= h){
                ans = mid;
                k_max = mid - 1;
            }
            else{
                k_min = mid + 1;
            }
            
        }

        return ans;

        
    
}};
