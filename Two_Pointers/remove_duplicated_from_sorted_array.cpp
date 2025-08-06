// 🔹 Problem: Remove Duplicates from Sorted Array  
// 🔗 Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/  
// 🟢 Difficulty: Easy  
// 🧠 Approach: Two Pointers – Use one pointer to iterate and another (`k`) to track the position of the next unique element.  
// ⏱️ Time Complexity: O(n)  
// 🧮 Space Complexity: O(1)  
// 📥 Input: nums = [1,1,2]  
// 📤 Output: 2 (nums becomes [1,2,_])  

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0; // Handle empty vector
        }

        int k = 1; // Index for next unique element

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] != nums[k - 1]) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};
