// 🔹 Problem: 3Sum Closest
// 🔗 Link: https://leetcode.com/problems/3sum-closest/
// 🟡 Difficulty: Medium
// 🧠 Approach: Sorting + Two Pointers
//      1. Sort the array.
//      2. For each element nums[i], use two pointers (left, right) to find the sum closest to target.
//      3. Update the closest difference whenever we find a better sum.
//      4. If exact target is found, return immediately.
// ⏱️ Time Complexity: O(n^2)
// 🧮 Space Complexity: O(1)
// 📥 Input: nums = [-1,2,1,-4], target = 1
// 📤 Output: 2
// 📖 Explanation: The sum that is closest to 1 is (-1 + 2 + 1 = 2).

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int closestDiff = INT_MAX;
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            int left = i + 1;
            int right = nums.size() - 1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (abs(sum - target) < abs(closestDiff)) {
                    closestDiff = sum - target;
                    ans = sum;
                }

                if (sum == target) return sum;
                else if (sum < target) left++;
                else right--;
            }
        }
        return ans;
    }
};
