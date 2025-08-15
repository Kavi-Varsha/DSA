// 🔹 Problem: Merge Sorted Array
// 🔗 Link: https://leetcode.com/problems/merge-sorted-array/
// 🟢 Difficulty: Easy
// 🧠 Approach: Two Pointers (starting from the end) – Compare elements from the back of both arrays and fill nums1 from the end.
// ⏱️ Time Complexity: O(m + n)
// 🧮 Space Complexity: O(1)
// 📥 Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// 📤 Output: [1,2,2,3,5,6]

#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m - 1;       // Pointer for nums1
        int p2 = n - 1;       // Pointer for nums2
        int p = m + n - 1;    // Pointer for placement in nums1

        // Merge from the back
        while (p2 >= 0) {
            if (p1 >= 0 && nums1[p1] > nums2[p2]) {
                nums1[p] = nums1[p1];
                p1--;
            } else {
                nums1[p] = nums2[p2];
                p2--;
            }
            p--;
        }
    }
};
