// 🔹 Problem: Missing Number
// 🔗 Link: https://leetcode.com/problems/missing-number/
// 🟢 Difficulty: Easy
// 🧠 Approach: Insert all numbers in an unordered_set. 
//              The missing one is the first not found in [0..n].
// ⏱️ Time Complexity: O(n)
// 🧮 Space Complexity: O(n)
// 📥 Input: nums = [3,0,1]
// 📤 Output: 2

int missingNumber(vector<int>& nums) {
    unordered_set<int> st(nums.begin(), nums.end());
    for(int i=0; i<=nums.size(); i++){
        if(st.find(i) == st.end()) return i;
    }
    return -1;
}
