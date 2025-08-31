// 🔹 Problem: Longest Substring Without Repeating Characters
// 🔗 Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/
// 🟠 Difficulty: Medium
// 🧠 Approach (unordered_map):
//      1. Use two pointers (l & r) for sliding window.
//      2. Maintain a map to store last seen index of each character.
//      3. If s[r] is already seen, move l to max(l, lastIndex+1).
//      4. Track maximum window size during traversal.
// ⏱️ Time Complexity: O(n) (each character processed once)
// 🧮 Space Complexity: O(k) (k = character set size, at most 256 for ASCII)
// 📥 Input: s = "bbbbb"
// 📤 Output: 1   (substring "b")

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int l = 0, r = 0, m = 0;
        for (r = 0; r < s.size(); r++) {
            if (mp.find(s[r]) != mp.end()) {
                l = max(l, mp[s[r]] + 1);
            }
            mp[s[r]] = r;
            m = max(m, r - l + 1);
        }
        return m;
    }
};
