// 🔹 Problem: Longest Substring Without Repeating Characters
// 🔗 Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/
// 🟠 Difficulty: Medium
// 🧠 Approach (unordered_set):
//      1. Use two pointers (l & r) for sliding window.
//      2. Maintain a set of characters in current window.
//      3. If s[r] already exists, shrink window by moving l until duplicate is removed.
//      4. Track maximum window size during traversal.
// ⏱️ Time Complexity: O(2n) (each character added and removed at most once)
// 🧮 Space Complexity: O(k) (k = character set size, at most 256 for ASCII)
// 📥 Input: s = "abcabcbb"
// 📤 Output: 3   (substring "abc")

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> mp;
        int l = 0, r = 0, m = 0;
        for (r = 0; r < s.size(); r++) {
            while (mp.find(s[r]) != mp.end()) {
                mp.erase(s[l]);
                l++;
            }
            mp.insert(s[r]);
            m = max(m, r - l + 1);
        }
        return m;
    }
};
