// 🔹 Problem: Fruit Into Baskets
// 🔗 Link: https://leetcode.com/problems/fruit-into-baskets/
// 🟡 Difficulty: Medium
// 🧠 Approach: Sliding Window + HashMap
//      1. Use an unordered_map to count the fruits in the current window.
//      2. Expand the window by adding fruits[r].
//      3. If more than 2 fruit types exist, shrink the window from the left.
//      4. Keep track of the maximum window size (longest subarray with ≤ 2 distinct fruits).
// ⏱️ Time Complexity: O(n)
// 🧮 Space Complexity: O(1) (at most 3 keys in map)
// 📥 Input: fruits = [1,2,1]
// 📤 Output: 3

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> mp;
        int m = 0, l = 0;

        for (int r = 0; r < fruits.size(); r++) {
            mp[fruits[r]]++;

            while (mp.size() > 2) {
                mp[fruits[l]]--;
                if (mp[fruits[l]] == 0) {
                    mp.erase(fruits[l]);
                }
                l++;
            }

            m = max(m, r - l + 1);
        }
        return m;
    }
};
