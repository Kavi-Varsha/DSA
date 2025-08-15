// 🔹 Problem: First Negative Prefix Sum
// 🔗 Concept: Prefix Sum
// 🟢 Difficulty: Easy
// 🧠 Approach: Maintain prefix sum while traversing and check the first index where sum < 0.
// ⏱️ Time Complexity: O(n)
// 🧮 Space Complexity: O(1)
// 📥 Input: nums = [2, -1, 3, -4, 5]
// 📤 Output: -1 (prefix sums = [2,1,4,0,5] → never negative)

#include <bits/stdc++.h>
using namespace std;

int firstNegativePrefixIndex(vector<int>& nums) {
    int prefixSum = 0;
    for (int i = 0; i < nums.size(); i++) {
        prefixSum += nums[i];
        if (prefixSum < 0) {
            return i; // return first index where prefix sum < 0
        }
    }
    return -1;
}

int main() {
    vector<int> nums = {2, -1, 3, -4, 5};
    cout << firstNegativePrefixIndex(nums) << endl; // Expected: -1
    return 0;
}
