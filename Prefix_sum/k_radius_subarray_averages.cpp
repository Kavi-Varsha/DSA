// 🔹 Problem: K Radius Subarray Averages
// 🔗 Link: https://leetcode.com/problems/k-radius-subarray-averages/
// 🟡 Difficulty: Medium
// 🧠 Approach: Prefix Sum – Precompute prefix sums to query subarray sums in O(1).
// ⏱️ Time Complexity: O(n)
// 🧮 Space Complexity: O(n)
// 📥 Input: nums = [7,4,3,9,1,8,5,2,6], k = 3
// 📤 Output: [-1,-1,-1,5,4,4,-1,-1,-1]

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> avgs(n);
        vector<long long> prefix(n + 1, 0);

        // Build prefix sum
        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + nums[i];
        }

        for (int i = 0; i < n; i++) {
            if (i < k || i >= n - k) {
                avgs[i] = -1; // Outside valid window
            } else {
                long long windowSum = prefix[i + k + 1] - prefix[i - k];
                avgs[i] = (int)(windowSum / ((2 * k) + 1));
            }
        }
        return avgs;
    }
};


//  JAVA APPROACH
// 🔹 Problem: K Radius Subarray Averages
// 🔗 Link: https://leetcode.com/problems/k-radius-subarray-averages/
// 🟡 Difficulty: Medium
// 🧠 Approach: Prefix Sum – Precompute prefix sums to query subarray sums in O(1).
// ⏱️ Time Complexity: O(n)
// 🧮 Space Complexity: O(n)
// 📥 Input: nums = [7,4,3,9,1,8,5,2,6], k = 3
// 📤 Output: [-1,-1,-1,5,4,4,-1,-1,-1]

class Solution {
    public int[] getAverages(int[] nums, int k) {
        int n = nums.length;
        long[] prefix = new long[n + 1]; // Use long for prefix sums to avoid overflow
        int[] avgs = new int[n];

        prefix[0] = 0;
        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + nums[i]; // Build prefix sum
        }

        for (int i = 0; i < n; i++) {
            if (i < k || i >= n - k) {
                avgs[i] = -1; // Outside valid window
            } else {
                long windowSum = prefix[i + k + 1] - prefix[i - k]; // O(1) window sum
                avgs[i] = (int)(windowSum / ((2 * k) + 1));
            }
        }
        return avgs;
    }
}
