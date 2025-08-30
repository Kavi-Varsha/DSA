# 🚀 Week 3 Progress – Hashing (unordered_map & unordered_set)

This week I focused on **Hashing** concepts in C++ using `unordered_map` and `unordered_set`.  
It was a bit tricky, but I was able to solve multiple problems and understand how hashing helps in reducing time complexity to **O(1) average** for lookups.

---

## ✅ Problems Solved

- Contains Duplicate  
- First Unique Character in a String  
- Two Sum  
- Valid Anagram  
- Intersection of Two Arrays  
- Intersection of Two Arrays II  
- Single Number  
- Happy Number  
- Longest Consecutive Sequence  
- Check if All Characters are Unique  
- Missing Number  

---

## ❌ Struggles I Faced

1. **Happy Number** – didn’t understand the cycle detection logic properly at first.  
2. **Two Sum** – struggled with storing indices in the hashmap.  
3. **Contains Nearby Duplicate** – confused about applying sliding window with hashing.  
4. Took time to clearly understand when to use `unordered_set` vs `unordered_map`.  

---

## 📝 Key Learnings

- Use **`unordered_set`** when you only care about existence/uniqueness.  
- Use **`unordered_map`** when you need to **store counts, indices, or extra info**.  
- **Happy Number →** detect cycles using `unordered_set`.  
- **Two Sum →** store value → index mapping for quick lookup.  
- **Sliding Window + Hashing →** expand right pointer, shrink left pointer when condition breaks.  

---

📌 **Reflection:**  
This week was a real grind 😅. I struggled a lot with `Happy Number`, `Two Sum`, and sliding window hash problems, but after practicing, I finally got comfortable with hashing. Now I feel much more confident about when to use `unordered_set` vs `unordered_map`.
