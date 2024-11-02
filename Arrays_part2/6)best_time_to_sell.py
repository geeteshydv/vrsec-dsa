https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/


Cpp 
Code-:
int maxProfit(std::vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < buy) {
                buy = prices[i];
            } else if (prices[i] - buy > profit) {
                profit = prices[i] - buy;
            }
        }
        return profit;
}


Java -:
class Solution {
    public int maxProfit(int[] prices) {
        if (prices.length == 0) return 0; // Handle empty array

        int buy = prices[0];
        int profit = 0;

        for (int i = 1; i < prices.length; i++) {
            if (prices[i] < buy) {
                buy = prices[i];
            } else {
                profit = Math.max(profit, prices[i] - buy);
            }
        }
        return profit;
    }
}


Python Code-:
class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        if not prices:  # Handle empty list
            return 0

        buy = prices[0]
        profit = 0

        for price in prices[1:]:
            if price < buy:
                buy = price
            else:
                profit = max(profit, price - buy)

        return profit