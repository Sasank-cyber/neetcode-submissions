class Solution {
public:
    int maxProfit(vector<int>& p) {
        
        int min_price = p[0];
        int max_profit = 0;

        for(int i = 0;i<p.size();i++){
            int c = p[i];
            
            int profit = c - min_price;
            min_price = min(min_price,c);
            max_profit = max(max_profit,profit);
            
    }
    return max_profit;
        
    }
};
