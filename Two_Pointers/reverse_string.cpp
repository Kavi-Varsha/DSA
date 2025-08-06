// 🔹 Problem: Reverse String  
// 🔗 Link: https://leetcode.com/problems/reverse-string/  
// 🟢 Difficulty: Easy  
// 🧠 Approach: Two Pointers – Swap characters from both ends and move inward until the middle is reached.  
// ⏱️ Time Complexity: O(n)  
// 🧮 Space Complexity: O(1)  
// 📥 Input: s = ["h","e","l","l","o"]  
// 📤 Output: ["o","l","l","e","h"]  

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0, right = s.size() - 1;
        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};
