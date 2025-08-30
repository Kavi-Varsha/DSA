// 🔹 Problem: Intersection of Two Arrays
// 🔗 Link: https://leetcode.com/problems/intersection-of-two-arrays/
// 🟢 Difficulty: Easy
// 🧠 Approach: 
//      1. Store all elements of nums1 in an unordered_set (unique only).
//      2. Iterate nums2 and check if elements exist in nums1 set.
//      3. Use another unordered_set for result (to keep unique intersection).
//      4. Convert set into vector and return.
// ⏱️ Time Complexity: O(n + m)  (where n = size of nums1, m = size of nums2)
// 🧮 Space Complexity: O(n + m)
// 📥 Input: nums1 = [1,2,2,1], nums2 = [2,2]
// 📤 Output: [2]

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(), nums1.end()); // unique elements of nums1
        unordered_set<int> ans;
        for(int x : nums2){
            if(s1.count(x)){
                ans.insert(x);
            }
        }
        return vector<int>(ans.begin(), ans.end());
    }
};
