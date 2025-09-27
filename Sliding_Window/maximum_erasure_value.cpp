// 🔹 Problem: Maximum Erasure Value
// 🔗 Link: https://leetcode.com/problems/maximum-erasure-value/
// 🟠 Difficulty: Medium
// 🧠 Approach: Sliding Window + HashMap
//      1. Use a sliding window with two pointers (l, r).
//      2. Maintain a running sum of the window.
//      3. Use unordered_map to track frequency of elements inside window.
//      4. If duplicate found, shrink from the left until window is unique.
//      5. Update maximum sum whenever window is valid.
// ⏱️ Time Complexity: O(n)
// 🧮 Space Complexity: O(n)  (hashmap for frequencies)
// 📥 Input: nums = [4,2,4,5,6]
// 📤 Output: 17 (from subarray [2,4,5,6])

class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,int> mp;
        int l = 0, sum = 0, maxSum = 0;

        for (int r = 0; r < nums.size(); r++) {
            mp[nums[r]]++;
            sum += nums[r];

            // shrink until unique
            while (mp[nums[r]] > 1) {
                mp[nums[l]]--;
                sum -= nums[l];
                if (mp[nums[l]] == 0) {
                    mp.erase(nums[l]);
                }
                l++;
            }

            maxSum = max(maxSum, sum);
        }
        return maxSum;
    }
};
