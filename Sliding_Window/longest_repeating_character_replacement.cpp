// 🔹 Problem: Longest Repeating Character Replacement
// 🔗 Link: https://leetcode.com/problems/longest-repeating-character-replacement/
// 🟠 Difficulty: Medium
// 🧠 Approach: Sliding Window + Frequency Count
//      1. Use a sliding window over string `s`.
//      2. Maintain frequency count of characters in the window.
//      3. Track the most frequent character (maxCount).
//      4. If (window size - maxCount) > k, shrink the window.
//      5. Keep updating maximum valid window size.
// ⏱️ Time Complexity: O(n)   (each character processed at most twice)
// 🧮 Space Complexity: O(26) (since only uppercase letters A–Z)
// 📥 Input: s = "AABABBA", k = 1
// 📤 Output: 4  (Replace 'AABAB' → "AAAA")

class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> count(26, 0);
        int left = 0, maxCount = 0, result = 0;

        for (int right = 0; right < s.size(); right++) {
            count[s[right] - 'A']++;
            maxCount = max(maxCount, count[s[right] - 'A']);

            // If window is invalid, shrink it
            while ((right - left + 1) - maxCount > k) {
                count[s[left] - 'A']--;
                left++;
            }

            result = max(result, right - left + 1);
        }

        return result;
    }
};
