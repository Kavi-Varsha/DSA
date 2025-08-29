// 🔹 Problem: Valid Anagram
// 🔗 Link: https://leetcode.com/problems/valid-anagram/
// 🟢 Difficulty: Easy
// 🧠 Approach: Use unordered_map to count frequency of chars in s. 
//              Decrease counts with chars from t. If any mismatch, return false.
// ⏱️ Time Complexity: O(n)
// 🧮 Space Complexity: O(26) ~ O(1)
// 📥 Input: s = "anagram", t = "nagaram"
// 📤 Output: true

bool isAnagram(string s, string t) {
    if(s.size() != t.size()) return false;
    unordered_map<char,int> freq;
    for(char c : s) freq[c]++;
    for(char c : t){
        if(--freq[c] < 0) return false;
    }
    return true;
}
