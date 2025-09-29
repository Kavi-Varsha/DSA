// 🔹 Problem: 4Sum
// 🔗 Link: https://leetcode.com/problems/4sum/
// 🟡 Difficulty: Medium
// 🧠 Approach: Sorting + Two Pointers
//      1. Sort the array for handling duplicates.
//      2. Fix two elements (`i`, `j`) and use two pointers (`left`, `right`) to find pairs that sum to `target - (nums[i] + nums[j])`.
//      3. Skip duplicates for `i`, `j`, `left`, and `right`.
//      4. Store unique quadruplets.
// ⏱️ Time Complexity: O(n^3)
// 🧮 Space Complexity: O(1) (ignoring output storage)
// 📥 Input: nums = [1,0,-1,0,-2,2], target = 0
// 📤 Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicate i

            for (int j = i + 1; j < nums.size(); j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue; // Skip duplicate j

                int left = j + 1, right = nums.size() - 1;
                while (left < right) {
                    long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];

                    if (sum == target) {
                        ans.push_back({nums[i], nums[j], nums[left], nums[right]});
                        while (left < right && nums[left] == nums[left + 1]) left++;
                        while (left < right && nums[right] == nums[right - 1]) right--;
                        left++; right--;
                    }
                    else if (sum < target) left++;
                    else right--;
                }
            }
        }
        return ans;
    }
};
