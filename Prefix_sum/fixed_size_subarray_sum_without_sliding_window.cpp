// 🔹 Problem: Fixed-size Subarray Max Sum
// 🔗 Concept: Prefix Sum
// 🟢 Difficulty: Easy
// 🧠 Approach: Build prefix sum array, then use it to compute subarray sums of length k in O(1).
// ⏱️ Time Complexity: O(n)
// 🧮 Space Complexity: O(n)
// 📥 Input: n = 6, k = 3, nums = [2,1,5,1,3,2]
// 📤 Output: 9 (from subarray [5,1,3])

#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int>& nums, int k) {
    vector<int> p(nums.size() + 1);
    p[0] = 0;

    // Build prefix sum
    for (int i = 0; i < nums.size(); i++) {
        p[i + 1] = p[i] + nums[i];
    }

    int i = 0, maxSum = INT_MIN, end = k;
    while (end <= nums.size()) {
        int sum = p[end] - p[i];
        maxSum = max(maxSum, sum);
        i++, end++;
    }
    return maxSum;
}

int main() {
    int n = 6, k = 3;
    vector<int> nums = {2, 1, 5, 1, 3, 2};
    cout << maxSubarraySum(nums, k) << endl; // Expected: 9
    return 0;
}
