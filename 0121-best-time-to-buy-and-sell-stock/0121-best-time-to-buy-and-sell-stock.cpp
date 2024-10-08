class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int minPrice = prices[0];

        for(int i=0; i<prices.size(); i++){
            if(prices[i] < minPrice){
                minPrice = prices[i];
            }
            else if(prices[i] - minPrice > profit){
                profit = prices[i] - minPrice;
            }
        }

        return profit;
    }
};