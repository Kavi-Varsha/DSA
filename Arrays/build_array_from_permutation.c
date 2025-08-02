// 🔹 Problem: Build Array from Permutation
// 🔗 Link: https://leetcode.com/problems/build-array-from-permutation/
// 🟢 Difficulty: Easy
// 🧠 Approach: For each index i, place nums[nums[i]] in the result array.
// ⏱️ Time Complexity: O(n)
// 🧮 Space Complexity: O(n)
// 📥 Example Input: [0,2,1,5,3,4]
// 📤 Output: [0,1,2,4,5,3]

int* buildArray(int* nums, int numsSize, int* returnSize) {
    // Allocate memory for the result array
    int *a = (int *)malloc(sizeof(int) * numsSize);

    // Build the permutation array
    for(int i = 0; i < numsSize; i++) {
        a[i] = nums[nums[i]];
    }

    // Set the return size
    *returnSize = numsSize;

    return a;
}
