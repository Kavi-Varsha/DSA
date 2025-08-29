// 🔹 Problem: Majority Element
// 🔗 Link: https://leetcode.com/problems/majority-element/
// 🟢 Difficulty: Easy
// 🧠 Approach: Count frequency of each element using unordered_map. 
//              The element with frequency > n/2 is the majority.
// ⏱️ Time Complexity: O(n)
// 🧮 Space Complexity: O(n)
// 📥 Input: nums = [3,2,3]
// 📤 Output: 3

int majorityElement(vector<int>& nums) {
    unordered_map<int,int> mp;
    for(int x : nums){
       mp[x]++;
    }
    for(auto &p : mp){
        if(p.second > nums.size()/2) return p.first;
    }

  //for(int x : num){
  //   if(mp[x]>nums.size()/2){
  //        return x;}}
    return -1;
}
