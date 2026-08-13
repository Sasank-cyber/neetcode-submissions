class Solution {
public:
    int maxProfit(vector<int>& p) {
            int l = 0;
        int r = 1;
        int max_profit = 0;
        while(r<p.size()){
            if(p[l]>p[r]){
               l =r;
            }
            else{
                int profit = p[r]-p[l];
                max_profit = max(profit,max_profit);
                r++;
            }

        }
        return max_profit;
    }
        
    
};
