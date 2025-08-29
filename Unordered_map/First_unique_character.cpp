// 🔹 Problem: First Unique Character in a String
// 🔗 Link: https://leetcode.com/problems/first-unique-character-in-a-string/
// 🟢 Difficulty: Easy
// 🧠 Approach: Count frequency of each character using unordered_map, 
//              then find the first index with count == 1.
// ⏱️ Time Complexity: O(n)
// 🧮 Space Complexity: O(26) ~ O(1)
// 📥 Input: s = "leetcode"
// 📤 Output: 0

int firstUniqChar(string s) {
    unordered_map<char,int> mp;
    for(char c : s) mp[c]++;
    for(int i=0; i<s.size(); i++){
        if(mp[s[i]] == 1) return i;
    }
    return -1;
}
