# 📘 DSA Learning Log: Day 1 to Day 4

> **Track**: Arrays, Prefix Sum, Sliding Window, Two Pointers  
> **Language**: C++  
> **Goal**: Strengthen problem-solving foundations using array-based techniques and common patterns.

---

## 🟩 Day 1: Arrays – Basics & Traversal

### 🧠 Concepts Learned:
- Array declaration, initialization, and traversal in C++.
- Index-based access and common mistakes.
- Manual test case analysis and debugging.

### ✅ LeetCode Problems Solved:
1. Build Array from Permutation  
2. Concatenation of Array  
3. Kids With the Greatest Number of Candies  

### ⚠️ Challenges Faced:
- Confused by `returnSize` in C-style LeetCode problems.
- Index out-of-bounds errors.
- Misunderstood problem statements initially – improved after checking hints.

---

## 🟩 Day 2: Prefix Sum

### 🧠 Concepts Learned:
- Prefix Sum Array: `prefix[i] = prefix[i-1] + arr[i]`
- Used `prefix[0] = 0` for easier range sum: `prefix[r+1] - prefix[l]`
- Optimized range sum queries with pre-computation.

### ✅ LeetCode Problems Solved:
1. Running Sum of 1D Array  
2. Find Pivot Index  

### ⚠️ Challenges Faced:
- Initial difficulty understanding why prefix sum is needed.
- Took time to see its benefit in improving time complexity.

---

## 🟩 Day 3: Sliding Window (Phase 1 & 2)

### 🧠 Concepts Learned:
- **Fixed-size window**: Best for subarrays of size `k`.
- **Dynamic-size window**: Shrinks/grows based on conditions.
- Identifying window patterns based on question requirements.

### ✅ LeetCode Problems Solved:
- Maximum Average Subarray I

### ⚠️ Challenges Faced:
- Misread the problem (calculated sum instead of average).
- Used `int` instead of `double`, causing wrong results.
- Confused about when to use fixed vs dynamic window.
- Did not understand how to use hashmaps in this context.

---

## 🟩 Day 4: Two Pointers Technique

### 🧠 Concepts Learned:
- Two types of pointer approaches:
  - **Opposite Ends**: `left` and `right` for sorted arrays.
  - **Same Direction**: `slow` and `fast` for in-place updates.
- Used to optimize problems like move zeroes and remove elements.

### ✅ LeetCode Problems Solved:
1. Move Zeros  
2. Remove Element  
3. Apply Operations to Array  

### ⚠️ Challenges Faced:
- Opposite pointers were easier to grasp than slow-fast.
- Confused by the need for swapping in `moveZeroes`.
- Still working on full clarity of how `slow` tracks non-zero positions.

---

## 📘 STL Concepts Practiced

### ✅ Vectors:
- Dynamic arrays in C++.
- Common operations:
```cpp
vector<int> v;
v.push_back(10);
v.pop_back();
int x = v[2];

## ✅ Hashmaps (Unordered Maps)

- Key-value pair storage with fast average-time lookups.
- Used for counting frequencies, detecting duplicates, and storing mappings.
- Very efficient: O(1) average time complexity for insert/find operations.

### 💡 Example Usage in C++

```cpp
unordered_map<int, int> mp;
mp[5] = 2;
mp[7]++;
if (mp.find(5) != mp.end()) {
    // key exists
}
