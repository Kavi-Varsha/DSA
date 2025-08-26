// 🔹 Problem: Max Consecutive Ones III
// 🔗 Link: https://leetcode.com/problems/max-consecutive-ones-iii/
// 🟡 Difficulty: Medium
// 🧠 Approach: Sliding Window – Expand the window, count flips (0s), and shrink when flips > k.
// ⏱️ Time Complexity: O(n)
// 🧮 Space Complexity: O(1)
// 📥 Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
// 📤 Output: 6

#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0, maxLength = 0, flips = 0;

        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] == 0) {
                flips++;
            }

            // Shrink window until flips <= k
            while (flips > k) {
                if (nums[left] == 0) {
                    flips--;
                }
                left++;
            }

            maxLength = max(maxLength, right - left + 1);
        }
        return maxLength;
    }
};

//Java approach
class Solution {
    public int longestOnes(int[] nums, int k) {
        int l=0,r=0,flip=0,length=Integer.MIN_VALUE;
        for(r=0;r<nums.length;r++){
            if(nums[r]==0){
                flip++;
            }
            while(flip>k){
                if(nums[l]==0){
                    flip--;
                }
                l++;
            }
            length=Math.max(length,r-l+1);
        }
        return length;
    }
}
