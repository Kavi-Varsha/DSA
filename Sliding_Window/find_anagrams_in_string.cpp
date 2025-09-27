// 🔹 Problem: Find All Anagrams in a String
// 🔗 Link: https://leetcode.com/problems/find-all-anagrams-in-a-string/
// 🟡 Difficulty: Medium
// 🧠 Approach: Sliding Window + HashMap
//      1. Build a frequency map for pattern string `p`.
//      2. Use a sliding window over `s` with the same size as `p`.
//      3. Keep a frequency map of the current window in `s`.
//      4. If both maps match, store the starting index `l`.
// ⏱️ Time Complexity: O(n) average (map compare O(26))
// 🧮 Space Complexity: O(26) → O(1)
// 📥 Input: s = "cbaebabacd", p = "abc"
// 📤 Output: [0, 6]

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int l = 0;
        unordered_map<char,int> pmp, smp;

        for (char c : p) {
            pmp[c]++;
        }

        for (int r = 0; r < s.size(); r++) {
            smp[s[r]]++;

            if (r - l + 1 > p.size()) {
                smp[s[l]]--;
                if (smp[s[l]] == 0) {
                    smp.erase(s[l]);
                }
                l++;
            }

            if (smp == pmp) {
                ans.push_back(l);
            }
        }
        return ans;
    }
};
