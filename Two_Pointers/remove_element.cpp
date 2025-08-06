// 🔹 Problem: Remove Element  
// 🔗 Link: https://leetcode.com/problems/remove-element/  
// 🟢 Difficulty: Easy  
// 🧠 Approach: Two Pointers – Traverse the array and move all elements not equal to `val` to the front using a `j` pointer.  
// ⏱️ Time Complexity: O(n)  
// 🧮 Space Complexity: O(1)  
// 📥 Input: nums = [3,2,2,3], val = 3  
// 📤 Output: 2 (nums becomes [2,2,_,_])  

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
        return j;
    }
};
