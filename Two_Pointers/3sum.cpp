// 🔹 Problem: 3Sum
// 🔗 Link: https://leetcode.com/problems/3sum/
// 🟡 Difficulty: Medium
// 🧠 Approach: Sorting + Two Pointers
//      1. Sort the array to handle duplicates easily.
//      2. Fix one element `nums[i]` and use two pointers (`left`, `right`) to find pairs that sum to `-nums[i]`.
//      3. Skip duplicates for `i`, `left`, and `right`.
//      4. Store unique triplets.
// ⏱️ Time Complexity: O(n^2)
// 🧮 Space Complexity: O(1) (ignoring output storage)
// 📥 Input: nums = [-1,0,1,2,-1,-4]
// 📤 Output: [[-1,-1,2],[-1,0,1]]

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicate i

            int left = i + 1, right = nums.size() - 1;
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if (sum == 0) {
                    ans.push_back({nums[i], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left + 1]) left++;   // Skip duplicates
                    while (left < right && nums[right] == nums[right - 1]) right--; // Skip duplicates
                    left++; right--;
                } 
                else if (sum < 0) left++;
                else right--;
            }
        }
        return ans;
    }
};
