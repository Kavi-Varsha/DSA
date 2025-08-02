// Problem: Running Sum of 1D Array
// Link: https://leetcode.com/problems/running-sum-of-1d-array/
// Difficulty: Easy
// Language: C
// Approach: Prefix Sum - Each element becomes the sum of itself and all previous elements.

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    // Allocate memory for the result array
    int *r = (int *)malloc(sizeof(int) * numsSize);

    // First element remains the same
    r[0] = nums[0];

    // Compute running sum
    for(int i = 1; i < numsSize; i++) {
        r[i] = nums[i] + r[i - 1]; // current + previous sum
    }

    // Set the return size
    *returnSize = numsSize;

    // Return the result array
    return r;
}
