# Function Generator with Successive Delta Calculation

A high-precision mathematical tool developed in C++ to generate linear function datapoints constrained within a range starting from 1 up to a strict maximum limit of 100. 

The core architecture is optimized using `float` data types to balance memory allocation and calculation accuracy, featuring real-time processing of successive differences (Delta tracking) between iterative outputs.

---

## ⚙️ Features & Functionality

The program executes via the system console and evaluates inputs dynamically through layered conditional statements:

1. **Range Optimization:** Limits values between 1 and 100 based on the main variable `n`.
2. **Successive Delta Evaluation:** Calculates the exact step difference (`f(k) - f(k-1)`) continuously across the loop.
3. **Dynamic Type-Casting:** Offers runtime conversion from floating-point values to strict integer formats upon request.
4. **count The number;** you can conurt The nnumber 
---

## 💻 Execution & Input Parameters

Upon running the binary, the interface prompts for the following strict logical parameters:

* **Enter the number:** Sets the upper evaluation boundary (e.g., `10`).
* **You want integer (Enter 1 / 0):** 
  * `1` enables integer type-casting (`int(f)`).
  * `0` maintains raw floating-point accuracy.
* **Are want f2-f1 (Enter 1 / 0):** 
  * `1` activates continuous tracking of the Delta difference.
  * `0` bypasses the delta difference output.

---

## 📊 Output Telemetry Example (n = 10)

```text
Enter the number:10
you want integer Enetr 1:0
Are want f2-f1 if yes enetr 1:1
f(1)=1          f(1)-f(0)=1
f(2)=12         f(2)-f(1)=11
f(1)=1          f(1)-f(0)=-11
f(2)=12         f(2)-f(1)=11
f(3)=23         f(3)-f(2)=11
f(1)=1          f(1)-f(0)=-22
f(2)=12         f(2)-f(1)=11
f(3)=23         f(3)-f(2)=11
f(4)=34         f(4)-f(3)=11
f(1)=1          f(1)-f(0)=-33
f(2)=12         f(2)-f(1)=11
f(3)=23         f(3)-f(2)=11
f(4)=34         f(4)-f(3)=11
f(5)=45         f(5)-f(4)=11
f(1)=1          f(1)-f(0)=-44
f(2)=12         f(2)-f(1)=11
f(3)=23         f(3)-f(2)=11
f(4)=34         f(4)-f(3)=11
f(5)=45         f(5)-f(4)=11
f(6)=56         f(6)-f(5)=11
f(1)=1          f(1)-f(0)=-55
f(2)=12         f(2)-f(1)=11
f(3)=23         f(3)-f(2)=11
f(4)=34         f(4)-f(3)=11
f(5)=45         f(5)-f(4)=11
f(6)=56         f(6)-f(5)=11
f(7)=67         f(7)-f(6)=11
f(1)=1          f(1)-f(0)=-66
f(2)=12         f(2)-f(1)=11
f(3)=23         f(3)-f(2)=11
f(4)=34         f(4)-f(3)=11
f(5)=45         f(5)-f(4)=11
f(6)=56         f(6)-f(5)=11
f(7)=67         f(7)-f(6)=11
f(8)=78         f(8)-f(7)=11
f(1)=1          f(1)-f(0)=-77
f(2)=12         f(2)-f(1)=11
f(3)=23         f(3)-f(2)=11
f(4)=34         f(4)-f(3)=11
f(5)=45         f(5)-f(4)=11
f(6)=56         f(6)-f(5)=11
f(7)=67         f(7)-f(6)=11
f(8)=78         f(8)-f(7)=11
f(9)=89         f(9)-f(8)=11
f(1)=1          f(1)-f(0)=-88
f(2)=12         f(2)-f(1)=11
f(3)=23         f(3)-f(2)=11
f(4)=34         f(4)-f(3)=11
f(5)=45         f(5)-f(4)=11
f(6)=56         f(6)-f(5)=11
f(7)=67         f(7)-f(6)=11
f(8)=78         f(8)-f(7)=11
f(9)=89         f(9)-f(8)=11
f(10)=100               f(10)-f(9)=11
```
*Note: The algorithm exhibits a constant linear difference (Delta = 11) while naturally generating a patterned cumulative reset when the loop counter re-initializes.*

---

## ⚖️ Legal Notice & Licensing

* **Copyright (C) 2026 Developer.** All Rights Reserved.
* The mathematical formulas and logical conditions embedded in this source code are the intellectual property of the author.
* Distributed under the **MIT License**. Permission is granted to review the code, provided that the original copyright notice remains intact.
