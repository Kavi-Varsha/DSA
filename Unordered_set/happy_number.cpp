// 🔹 Problem: Happy Number
// 🔗 Link: https://leetcode.com/problems/happy-number/
// 🟢 Difficulty: Easy
// 🧠 Approach: Use unordered_set to detect cycles when computing digit-square sums. 
//              If we reach 1, it's happy. If cycle repeats, not happy.
// ⏱️ Time Complexity: O(log n) per iteration
// 🧮 Space Complexity: O(log n)
// 📥 Input: n = 19
// 📤 Output: true

int digitSquareSum(int n){
    int sum = 0;
    while(n > 0){
        int d = n % 10;
        sum += d * d;
        n /= 10;
    }
    return sum;
}

bool isHappy(int n) {
    unordered_set<int> seen;
    while(n != 1){
        if(seen.count(n)) return false; // cycle detected
        seen.insert(n);
        n = digitSquareSum(n);
    }
    return true;
}
