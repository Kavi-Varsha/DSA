// 🔹 Problem: Find the Duplicate Number
// 🔗 Link: https://leetcode.com/problems/find-the-duplicate-number/
// 🟡 Difficulty: Medium
// 🧠 Approach: Use unordered_map to count frequency. 
//              The first number with frequency > 1 is the duplicate.
// ⏱️ Time Complexity: O(n)
// 🧮 Space Complexity: O(n)
// 📥 Input: nums = [1,3,4,2,2]
// 📤 Output: 2

int findDuplicate(vector<int>& nums) {
    unordered_map<int,int> mp;
    for(int x : nums){
        mp[x]++;
        if(mp[x] > 1) return x;
    }
    return -1;
}
