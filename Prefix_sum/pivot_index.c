// 🔹 Problem: Find Pivot Index
// 🔗 Link: https://leetcode.com/problems/find-pivot-index/
// 🟢 Difficulty: Easy
// 🧠 Approach: Use a prefix sum array. For each index, calculate the sum of elements to the left and right. If they're equal, return the index.
// ⏱️ Time Complexity: O(n)
// 🧮 Space Complexity: O(n)
// 📥 Input: [1,7,3,6,5,6]
// 📤 Output: 3

int pivotIndex(int* nums, int n) {
    int prefix_sum[n + 1];
    int pivot, leftsum = 0, rightsum = 0;

    // Step 1: Build prefix sum array
    prefix_sum[0] = 0;
    for(int i = 1; i <= n; i++) {
        prefix_sum[i] = prefix_sum[i - 1] + nums[i - 1];
    }

    // Step 2: Check for pivot index
    for(int i = 0; i < n; i++) {
        if(i == 0) {
            leftsum = 0;
            rightsum = prefix_sum[n] - prefix_sum[1];
        } else if(i == n - 1) {
            rightsum = 0;
            leftsum = prefix_sum[n - 1] - prefix_sum[0];
        } else {
            leftsum = prefix_sum[i] - prefix_sum[0];
            rightsum = prefix_sum[n] - prefix_sum[i + 1];
        }

        if(leftsum == rightsum) {
            return i;
        }
    }

    return -1; // No pivot found
}
