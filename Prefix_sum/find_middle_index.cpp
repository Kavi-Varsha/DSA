// 🔹 Problem: Find Middle Index
// 🔗 Link: https://leetcode.com/problems/find-pivot-index/
// 🟢 Difficulty: Easy
// 🧠 Approach: Prefix Sum – Compute total sum, then check if left sum == right sum at each index.
// ⏱️ Time Complexity: O(n)
// 🧮 Space Complexity: O(n) (can be optimized to O(1))
// 📥 Input: nums = [1,7,3,6,5,6]
// 📤 Output: 3

#include <vector>
using namespace std;

class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        vector<int> prefix(nums.size() + 1);
        prefix[0] = 0;

        // Build prefix sum
        for (int i = 0; i < nums.size(); i++) {
            prefix[i + 1] = prefix[i] + nums[i];
        }

        // Check each index as pivot
        for (int pivot = 0; pivot < nums.size(); pivot++) {
            int leftSum = prefix[pivot];                // sum of elements before pivot
            int rightSum = prefix[nums.size()] - prefix[pivot + 1]; // sum of elements after pivot
            if (leftSum == rightSum) {
                return pivot;
            }
        }

        return -1; // No pivot found
    }
};
