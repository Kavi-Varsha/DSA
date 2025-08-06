// 🔹 Problem: Move Zeroes  
// 🔗 Link: https://leetcode.com/problems/move-zeroes/  
// 🟢 Difficulty: Easy  
// 🧠 Approach: Two Pointers – Use `fast` to find non-zero elements and `slow` to track where to place them. Swap when needed.  
// ⏱️ Time Complexity: O(n)  
// 🧮 Space Complexity: O(1)  
// 📥 Input: nums = [0,1,0,3,12]  
// 📤 Output: [1,3,12,0,0]  

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slow = 0, fast = 0, n = nums.size();
        for (fast = 0; fast < n; fast++) {
            if (nums[fast] != 0) {
                swap(nums[slow], nums[fast]);
                slow++;
            }
        }
    }
};
