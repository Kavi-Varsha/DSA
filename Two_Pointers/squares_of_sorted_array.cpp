// 🔹 Problem: Squares of a Sorted Array  
// 🔗 Link: https://leetcode.com/problems/squares-of-a-sorted-array/  
// 🟢 Difficulty: Easy  
// 🧠 Approach: Two Pointers – Compare absolute values from both ends, square them, and fill the result array from the back.  
// ⏱️ Time Complexity: O(n)  
// 🧮 Space Complexity: O(n)  
// 📥 Input: nums = [-4,-1,0,3,10]  
// 📤 Output: [0,1,9,16,100]  

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result(nums.size());
        int left = 0, right = nums.size() - 1;
        int pos = nums.size() - 1;
        while (left <= right) {
            int leftsq = nums[left] * nums[left];
            int rightsq = nums[right] * nums[right];
            if (leftsq > rightsq) {
                result[pos--] = leftsq;
                left++;
            } else {
                result[pos--] = rightsq;
                right--;
            }
        }
        return result;
    }
};
