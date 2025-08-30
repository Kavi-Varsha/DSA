// 🔹 Problem: Single Number
// 🔗 Link: https://leetcode.com/problems/single-number/
// 🟢 Difficulty: Easy
// 🧠 Approach: Use unordered_map to count frequency of numbers. 
//              The number with count == 1 is the answer.
// ⏱️ Time Complexity: O(n)
// 🧮 Space Complexity: O(n)
// 📥 Input: nums = [4,1,2,1,2]
// 📤 Output: 4

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int x : nums) mp[x]++;
        for(auto &p : mp){
            if(p.second == 1) return p.first;
        }
        return -1; // shouldn't reach here
    }
};
