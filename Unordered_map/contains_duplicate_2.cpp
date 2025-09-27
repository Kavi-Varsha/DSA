// 🔹 Problem: Contains Duplicate II
// 🔗 Link: https://leetcode.com/problems/contains-duplicate-ii/
// 🟢 Difficulty: Easy
// 🧠 Approach: HashMap (Value → Last Index)
//      1. Use an unordered_map to store the last index of each element.
//      2. For each element, check if it already exists in the map.
//      3. If yes, check if the difference in indices ≤ k.
//      4. If true, return true (duplicate within range).
//      5. Otherwise, update the index in the map.
// ⏱️ Time Complexity: O(n)
// 🧮 Space Complexity: O(n)
// 📥 Input: nums = [1,2,3,1], k = 3
// 📤 Output: true

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp;  // value → last index

        for (int r = 0; r < nums.size(); r++) {
            if (mp.find(nums[r]) != mp.end()) {
                if (abs(mp[nums[r]] - r) <= k) {
                    return true;
                }
            }
            mp[nums[r]] = r; // update last seen index
        }
        return false;
    }
};
