# 🧠 Basics to Backtracking

This repository contains recursive and backtracking-based C++ solutions to a set of foundational problems.  
All problems were solved **without using inbuilt combination or permutation functions**, following pure recursive logic.

---

## 📋 Problem List

### **1️⃣ Print N-bit Binary Numbers having more 1s than 0s**
**Link:** [GeeksforGeeks Problem](https://www.geeksforgeeks.org/print-n-bit-binary-numbers-having-more-1s-than-0s/)  
**Objective:**  
Generate all binary strings of length `N` such that at any prefix, the count of `1’s` is never less than the count of `0’s`.  
**Approach:**  
Recursive generation of binary strings with prefix constraints.

---

### **2️⃣ Delete Middle Element of a Stack using Recursion**
**Link:** [GeeksforGeeks Problem](https://www.geeksforgeeks.org/delete-middle-element-of-a-stack/)  
**Objective:**  
Delete the middle element of a stack **without using loops or extra data structures**.  
**Approach:**  
Recursively pop elements until the middle is reached, then rebuild the stack.

---

### **3️⃣ Letter Combinations of a Phone Number (LeetCode – 17)**
**Link:** [LeetCode Problem](https://leetcode.com/problems/letter-combinations-of-a-phone-number/)  
**Objective:**  
Given digits (2–9), return all possible letter combinations they represent.  
**Approach:**  
Recursive backtracking over digit-to-letter mappings.

---

### **4️⃣ Combinations (LeetCode – 77)**
**Link:** [LeetCode Problem](https://leetcode.com/problems/combinations/)  
**Objective:**  
Generate all possible combinations of `k` numbers from the range `1…n`.  
**Approach:**  
Recursive inclusion/exclusion-based combination generator.

---

### **5️⃣ Letter Tile Possibilities (LeetCode – 1079)**
**Link:** [LeetCode Problem](https://leetcode.com/problems/letter-tile-possibilities/)  
**Objective:**  
Given a set of tiles (may include duplicates), return the count of all possible non-empty sequences.  
**Approach:**  
Use recursion with a frequency map to explore all unique sequences.

---

## 🧩 Topics Covered
- Recursion fundamentals  
- Backtracking  
- Stack manipulation using recursion  
- Combinatorial generation  

---

## 🛠️ Tech Stack
- **Language:** C++17  
- **Paradigm:** Recursion & Backtracking  
- **Tools:** Git, VS Code, Command Line  

---

## 🚀 How to Run

1. Clone the repository:
   ```bash
   git clone https://github.com/The-AarushiSingh/Basics-to-Backtracking.git
