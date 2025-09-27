// 🔹 Problem: 2Sum Closest
// 🟡 Difficulty: Medium (variation problem)
// 🧠 Approach: Sorting + Two Pointers
//      1. Sort the array.
//      2. Use two pointers (left, right) to calculate sum.
//      3. Track the closest difference to target.
//      4. Move left/right depending on sum vs target.
// ⏱️ Time Complexity: O(n log n)
// 🧮 Space Complexity: O(1)
// 📥 Input: nums = [1, 2, 4, 8], target = 6
// 📤 Output: 6
// 📖 Explanation: Closest sum to 6 is (2 + 4 = 6).

int twoSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int left = 0, right = nums.size() - 1;
    int closestDiff = INT_MAX, ans = 0;

    while (left < right) {
        int sum = nums[left] + nums[right];

        if (abs(sum - target) < abs(closestDiff)) {
            closestDiff = sum - target;
            ans = sum;
        }

        if (sum == target) return sum;
        else if (sum < target) left++;
        else right--;
    }

    return ans;
}
