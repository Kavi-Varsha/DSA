// 🔹 Problem: Minimum Size Subarray Sum
// 🔗 Link: https://leetcode.com/problems/minimum-size-subarray-sum/
// 🟠 Difficulty: Medium
// 🧠 Approach: Sliding Window
//      1. Expand window by moving `right` pointer and adding nums[right] to sum.
//      2. Shrink window from the left while sum >= target.
//      3. Track minimum length when valid window is found.
//      4. If no valid subarray, return 0.
// ⏱️ Time Complexity: O(n)
// 🧮 Space Complexity: O(1)
// 📥 Input: target = 7, nums = [2,3,1,2,4,3]
// 📤 Output: 2 (subarray [4,3])

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int left = 0, sum = 0, minLen = INT_MAX;

        for (int right = 0; right < n; right++) {
            sum += nums[right];

            // shrink window while condition is satisfied
            while (sum >= target) {
                minLen = min(minLen, right - left + 1);
                sum -= nums[left++];
            }
        }

        return (minLen == INT_MAX) ? 0 : minLen;
    }
};
