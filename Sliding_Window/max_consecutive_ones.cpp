// 🔹 Problem: Max Consecutive Ones
// 🔗 Link: https://leetcode.com/problems/max-consecutive-ones/
// 🟢 Difficulty: Easy
// 🧠 Approach: Sliding Window – Reset the left pointer whenever a 0 is encountered, track max window size.
// ⏱️ Time Complexity: O(n)
// 🧮 Space Complexity: O(1)
// 📥 Input: nums = [1,1,0,1,1,1]
// 📤 Output: 3

#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0, left = 0;

        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] == 0) {
                left = right + 1; // reset window after a 0
            }
            maxCount = max(maxCount, right - left + 1);
        }

        return maxCount;
    }
};
