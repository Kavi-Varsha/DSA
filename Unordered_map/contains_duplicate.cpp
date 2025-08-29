// 🔹 Problem: Contains Duplicate
// 🔗 Link: https://leetcode.com/problems/contains-duplicate/
// 🟢 Difficulty: Easy
// 🧠 Approach: Count frequency of each number using unordered_map. 
//              If any count > 1, return true.
// ⏱️ Time Complexity: O(n)
// 🧮 Space Complexity: O(n)
// 📥 Input: nums = [1,2,3,1]
// 📤 Output: true

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> s;
        for(int x : nums){
            s[x]++;
        }
        for(auto &p : s){
            if(p.second > 1){
                return true;
            }
        }
        return false;
    }
};
