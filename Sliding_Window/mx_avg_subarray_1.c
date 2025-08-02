// 🔹 Problem: Maximum Average Subarray I
// 🔗 Link: https://leetcode.com/problems/maximum-average-subarray-i/
// 🟢 Difficulty: Easy
// 🧠 Approach: Sliding Window – Calculate the sum of the first 'k' elements, then slide the window one element at a time, updating the sum and tracking the max.
// ⏱️ Time Complexity: O(n)
// 🧮 Space Complexity: O(1)
// 📥 Input: nums = [1,12,-5,-6,50,3], k = 4
// 📤 Output: 12.75

double findMaxAverage(int* nums, int numsSize, int k) {
    int i;
    double sum = 0;

    // Calculate the sum of the first k elements
    for (i = 0; i < k; i++) {
        sum += nums[i];
    }

    // Initialize max_sum with the sum of the first window
    double max_sum = sum;

    // Slide the window and update max_sum
    for (i = k; i < numsSize; i++) {
        sum += nums[i] - nums[i - k];  // remove leftmost, add new element
        if (sum > max_sum) {
            max_sum = sum;
        }
    }

    // Return the maximum average
    return max_sum / k;
}
