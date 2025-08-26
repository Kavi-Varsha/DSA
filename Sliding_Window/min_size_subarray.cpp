// 🔹 Problem: Minimum Size Subarray Sum
// 🔗 Link: https://leetcode.com/problems/minimum-size-subarray-sum/
// 🟡 Difficulty: Medium
// 🧠 Approach: Sliding Window – Expand the window until sum >= target, then shrink from the left.
// ⏱️ Time Complexity: O(n)
// 🧮 Space Complexity: O(1)
// 📥 Input: target = 7, nums = [2,3,1,2,4,3]
// 📤 Output: 2 (subarray [4,3])

#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int left = 0, sum = 0;
        int minLen = INT_MAX;

        for (int right = 0; right < n; right++) {
            sum += nums[right];

            // Shrink window while sum >= target
            while (sum >= target) {
                minLen = min(minLen, right - left + 1);
                sum -= nums[left];
                left++;
            }
        }
        return (minLen == INT_MAX) ? 0 : minLen;
    }
};


// Java approach
class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int left = 0, sum = 0;
        int minLen = Integer.MAX_VALUE;

        for (int right = 0; right < nums.length; right++) {
            sum += nums[right];

            // Shrink window while condition is satisfied
            while (sum >= target) {
                minLen = Math.min(minLen, right - left + 1);
                sum -= nums[left++];
            }
        }

        return (minLen == Integer.MAX_VALUE) ? 0 : minLen;
    }
}
