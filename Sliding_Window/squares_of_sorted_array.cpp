// 🔹 Problem: Squares of a Sorted Array  
// 🔗 Link: https://leetcode.com/problems/squares-of-a-sorted-array/  
// 🟢 Difficulty: Easy  
// 🧠 Approach: Two-Pointer – Place one pointer at the beginning and one at the end, compare absolute values, square the larger one, and fill the result array from the end.
// ⏱️ Time Complexity: O(n)  
// 🧮 Space Complexity: O(n) (result array)  
// 📥 Input: nums = [-4,-1,0,3,10]  
// 📤 Output: [0,1,9,16,100]  

vector<int> sortedSquares(vector<int>& nums) {
    int n = nums.size();
    int left = 0;
    int right = n - 1;
    vector<int> result(n);  // Output array of same size
    int pos = n - 1;        // Fill result array from end

    while (left <= right) {
        int leftSq = nums[left] * nums[left];
        int rightSq = nums[right] * nums[right];

        if (leftSq > rightSq) {
            result[pos] = leftSq;
            left++;
        } else {
            result[pos] = rightSq;
            right--;
        }
        pos--;
    }

    return result;
}
