// 🔹 Problem: Find the Highest Altitude
// 🔗 Link: https://leetcode.com/problems/find-the-highest-altitude/
// 🟢 Difficulty: Easy
// 🧠 Approach: Create a prefix sum array to track the altitude at each point. The max value in this array is the highest altitude.
// ⏱️ Time Complexity: O(n)
// 🧮 Space Complexity: O(n) (can be optimized to O(1) if done in-place)
// 📥 Input: gain = [-5,1,5,0,-7]
// 📤 Output: 1

int largestAltitude(int* gain, int gainSize) {
    int i, max = 0;
    int a[gainSize + 1];
    a[0] = 0;
    a[1] = gain[0];

    // Build prefix sum array of altitudes
    for(i = 1; i < gainSize; i++) {
        a[i + 1] = gain[i] + a[i];
    }

    // Find the maximum altitude
    for(i = 0; i < gainSize + 1; i++) {
        if(a[i] >= max) {
            max = a[i];
        }
    }

    return max;
}
