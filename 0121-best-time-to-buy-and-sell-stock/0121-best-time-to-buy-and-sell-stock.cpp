class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < buy) {//if least price available take that
                buy = prices[i];
            } else if (prices[i] - buy > profit) {//if profit increases
                profit = prices[i] - buy;
            }
        }
        return profit;
    }
};