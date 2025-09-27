// 🔹 Problem: Permutation in String
// 🔗 Link: https://leetcode.com/problems/permutation-in-string/
// 🟠 Difficulty: Medium
// 🧠 Approach: Sliding Window + HashMap
//      1. Count frequency of characters in s1 (pattern).
//      2. Use a sliding window of size |s1| over s2.
//      3. Maintain character counts for current window in s2.
//      4. If window size exceeds |s1|, shrink from the left.
//      5. Compare both maps – if equal, permutation exists.
// ⏱️ Time Complexity: O(n)   (n = |s2|, each character processed once)
// 🧮 Space Complexity: O(26) (constant space for lowercase letters)
// 📥 Input: s1 = "ab", s2 = "eidbaooo"
// 📤 Output: true   (substring "ba" is a permutation of "ab")

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> pmap; // frequency of s1 (pattern)
        unordered_map<char, int> smap; // frequency of sliding window in s2

        for (char c : s1) {
            pmap[c]++;
        }

        int l = 0, r = 0;
        for (r = 0; r < s2.size(); r++) {
            smap[s2[r]]++;

            // shrink window if size > s1.size()
            if (r - l + 1 > s1.size()) {
                --smap[s2[l]];
                if (smap[s2[l]] == 0) {
                    smap.erase(s2[l]);
                }
                l++;
            }

            // check if current window matches pattern
            if (smap == pmap) {
                return true;
            }
        }
        return false;
    }
};
