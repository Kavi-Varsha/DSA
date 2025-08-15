// 🔹 Problem: Range Sum Query - Immutable
// 🔗 Link: https://leetcode.com/problems/range-sum-query-immutable/
// 🟢 Difficulty: Easy
// 🧠 Approach: Prefix Sum – Precompute cumulative sums to answer queries in O(1).
// ⏱️ Time Complexity: O(n) for preprocessing, O(1) per query
// 🧮 Space Complexity: O(n)
// 📥 Input: nums = [-2,0,3,-5,2,-1], queries = [[0,2],[2,5],[0,5]]
// 📤 Output: [1, -1, -3]

#include <vector>
using namespace std;

class NumArray {
private:
    vector<int> p; // Prefix sum array

public:
    NumArray(vector<int>& nums) {
        p.resize(nums.size() + 1);
        p[0] = 0;

        for (int i = 0; i < nums.size(); i++) {
            p[i + 1] = p[i] + nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        return p[right + 1] - p[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
