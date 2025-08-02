// 🔹 Problem: Concatenation of Array
// 🔗 Link: https://leetcode.com/problems/concatenation-of-array/
// 🟢 Difficulty: Easy
// 🧠 Approach: Create a new array of size 2 * numsSize. Copy the elements of `nums` twice – once from index 0 to n-1, and again from n to 2n-1.
// ⏱️ Time Complexity: O(n)
// 🧮 Space Complexity: O(n) – for the new array
// 📥 Example Input: [1, 2, 1]
// 📤 Output: [1, 2, 1, 1, 2, 1]

int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    // Allocate memory for the result array of size 2n
    int *a = (int *)malloc(sizeof(int) * 2 * numsSize);

    // Copy the original array twice
    for(int i = 0; i < numsSize; i++) {
        a[i] = nums[i];               // First half
        a[i + numsSize] = nums[i];    // Second half
    }

    *returnSize = 2 * numsSize;
    return a;
}
