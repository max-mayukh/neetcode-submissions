class Solution {
public:
//LLM Solution
    int maxProfit(vector<int>& prices) {
        // Edge case: if there are fewer than 2 days, no transaction can happen
        if (prices.size() < 2) return 0;

        int max_profit = 0; // Initialize to 0 as per problem requirements
        int buy_day = 0;
        int sell_day = 1; // Start looking to sell on day 1

        while (sell_day < prices.size()) {
            // If it's a profitable transaction
            if (prices[sell_day] > prices[buy_day]) {
                int profit = prices[sell_day] - prices[buy_day];
                max_profit = max(profit, max_profit);
            } else {
                // If the sell_day price is lower, it becomes our new best buying day
                buy_day = sell_day;
            }
            // Always move the sell_day forward to explore new days
            sell_day++;
        }
        
        return max_profit;
    }
};