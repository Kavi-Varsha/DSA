// 🔹 Problem: Check if All Characters are Unique
// 🔗 Link: (No direct LeetCode link – common interview problem)
// 🟢 Difficulty: Easy
// 🧠 Approach: Use unordered_set to track seen characters. 
//              If a character repeats, return false.
// ⏱️ Time Complexity: O(n)
// 🧮 Space Complexity: O(n)
// 📥 Input: s = "abc"
// 📤 Output: true

bool isUnique(string s) {
    unordered_set<char> st;
    for(char c : s){
        if(st.count(c)) return false; 
        st.insert(c);
    }
    return true;
}
