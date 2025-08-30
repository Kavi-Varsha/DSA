// 🔹 Problem: Two Sum
// 🔗 Link: https://leetcode.com/problems/two-sum/
// 🟢 Difficulty: Easy
// 🧠 Approach: Use unordered_map to store seen elements and their indices. 
//              For each element, check if (target - num) exists.
// ⏱️ Time Complexity: O(n)
// 🧮 Space Complexity: O(n)
// 📥 Input: nums = [2,7,11,15], target = 9
// 📤 Output: [0,1]

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0; i<nums.size(); i++){
            int seen = target - nums[i];
            if(mp.find(seen) != mp.end()){
                return {i, mp[seen]};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};
