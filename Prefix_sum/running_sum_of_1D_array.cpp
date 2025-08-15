// 🔹 Problem: Running Sum of 1D Array
// 🔗 Link: https://leetcode.com/problems/running-sum-of-1d-array/
// 🟢 Difficulty: Easy
// 🧠 Approach: Prefix Sum – Store cumulative sum at each index.
// ⏱️ Time Complexity: O(n)
// 🧮 Space Complexity: O(n) (can be O(1) if done in-place)
// 📥 Input: nums = [1,2,3,4]
// 📤 Output: [1,3,6,10]

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> prefix(nums.size());
        prefix[0] = nums[0];
        
        for (int i = 1; i < nums.size(); i++) {
            prefix[i] = prefix[i - 1] + nums[i];
        }
        return prefix;
    }
};
