// 🔹 Problem: Apply Operations to an Array  
// 🔗 Link: https://leetcode.com/problems/apply-operations-to-an-array/  
// 🟢 Difficulty: Easy  
// 🧠 Approach: First pass to double equal adjacent numbers and set the next to 0. Second pass to shift all non-zero values to the front using two pointers.  
// ⏱️ Time Complexity: O(n)  
// 🧮 Space Complexity: O(1)  
// 📥 Input: nums = [1,2,2,1,1,0]  
// 📤 Output: [1,4,2,1,0,0]  

class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size(), j = 0;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                nums[i] *= 2;
                nums[i + 1] = 0;
            }
        }
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
        return nums;
    }
};
