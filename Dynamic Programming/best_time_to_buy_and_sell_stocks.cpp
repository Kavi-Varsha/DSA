// 🔹 Problem: Best Time to Buy and Sell Stock
// 🔗 Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// 🟢 Difficulty: Easy
// 🧠 Approach: Track the minimum price seen so far and compute profit at each step, keeping the maximum profit.
// ⏱️ Time Complexity: O(n)
// 🧮 Space Complexity: O(1)
// 📥 Input: prices = [7,1,5,3,6,4]
// 📤 Output: 5  (Buy at 1, Sell at 6)

#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = INT_MAX;   // Minimum price so far
        int maxprofit = 0;        // Maximum profit so far

        for (int price : prices) {
            if (price < minprice) {
                minprice = price; // Update min price
            } else if (price - minprice > maxprofit) {
                maxprofit = price - minprice; // Update max profit
            }
        }
        return maxprofit;
    }
};
