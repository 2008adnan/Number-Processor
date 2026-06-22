# Number Processor 🔢
 
A beginner-to-intermediate level C program that processes numbers entered by the user, applying multiple rules and conditions.
 
---
 
## 💡 What It Does
 
- Takes `n` numbers as input from user one by one
- **Skips** negative numbers using `continue`
- **Stops** the loop if `0` is entered using `break`
- For valid (positive, non-zero) numbers:
  - Checks **Even / Odd** using ternary operator
  - Categorizes as **Small / Medium / Large** using if-else ladder
  - Checks **remainder when divided by 5** using switch statement
- At the end, prints a **summary** of how many numbers were processed vs skipped
---
 
## 🧠 Concepts Used
 
| Concept | Where Used |
|---|---|
| Variables & Data Types | `int n`, `int num`, counters |
| for Loop | Main loop running `n` times |
| continue | Skipping negative numbers |
| break | Stopping loop on zero |
| Ternary Operator | Even / Odd check |
| if-else ladder | Small / Medium / Large category |
| switch statement | Remainder check (num % 5) |
 
---
 
## 🖥️ Sample Output
 
```
Enter how many numbers you want to process: 4
 
Enter number 1: 12
12 is Even
Category: Medium Number
Remainder 2 when divided by 5
 
Enter number 2: -5
Skipped negative number
 
Enter number 3: 0
Loop stopped at zero
 
--- Summary ---
Total valid numbers processed: 1
Total negative numbers skipped: 1
```
---
## ✍️Author
Adnan Ahmad

GitHub : 2008adnan
