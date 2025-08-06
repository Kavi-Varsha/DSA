// 🔹 Problem: Two Sum II – Input Array Is Sorted
// 🔗 Link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
// 🟢 Difficulty: Easy
// 🧠 Approach: Two Pointers – Start with left at 0 and right at end; move inward based on the sum compared to target.
// ⏱️ Time Complexity: O(n)
// 🧮 Space Complexity: O(1)
// 📥 Input: nums = [2,7,11,15], target = 9
// 📤 Output: [1,2]

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1, sum = 0;

        while (left < right) {
            sum = nums[left] + nums[right];

            if (sum == target) {
                return {left + 1, right + 1};  // 1-based indexing
            } else if (sum > target) {
                right--;
            } else {
                left++;
            }
        }

        return {};
    }
};
