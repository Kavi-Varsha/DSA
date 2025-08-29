// 🔹 Problem: Contains Duplicate
// 🔗 Link: https://leetcode.com/problems/contains-duplicate/
// 🟢 Difficulty: Easy
// 🧠 Approach: Use unordered_set to check duplicates while inserting elements. 
//              If an element already exists, return true.
// ⏱️ Time Complexity: O(n)
// 🧮 Space Complexity: O(n)
// 📥 Input: nums = [1,2,3,1]
// 📤 Output: true

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(int x : nums){
            if(s.count(x)) return true; 
            s.insert(x);
        }
        return false;
    }
};
