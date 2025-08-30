// 🔹 Problem: Intersection of Two Arrays II
// 🔗 Link: https://leetcode.com/problems/intersection-of-two-arrays-ii/
// 🟢 Difficulty: Easy
// 🧠 Approach: Count frequency of elements from nums1 using unordered_map. 
//              For each element in nums2, if it exists in map with count > 0, add to result.
// ⏱️ Time Complexity: O(n + m)
// 🧮 Space Complexity: O(min(n,m))
// 📥 Input: nums1 = [1,2,2,1], nums2 = [2,2]
// 📤 Output: [2,2]

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int x : nums1) mp[x]++;
        for(int x : nums2){
            if(mp.find(x) != mp.end() && mp[x] > 0){
                ans.push_back(x);
                mp[x]--;
            }
        }
        return ans;
    }
};
