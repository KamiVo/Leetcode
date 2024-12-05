# LeetCode Solutions 🚀

This repository contains efficient **C++ solutions** for various LeetCode problems, organized by problem number and name for easy navigation. 🧩

---

## 📁 Project Structure

- **`CMakeLists.txt`**: Configuration file for building the project with CMake.
- **Problem Solutions**:
  - `1507_Reformat_Date.cpp`: Solution for problem [1507 - Reformat Date](https://leetcode.com/problems/reformat-date/description/).
  - `1332_Remove_Palindromic_Subsequences.cpp`: Solution for problem [1332 - Remove Palindromic Subsequences](https://leetcode.com/problems/remove-palindromic-subsequences/description/).
  - `2409_Count_Days_Spent_Together.cpp`: Solution for problem [2409 - Count Days Spent Together](https://leetcode.com/problems/count-days-spent-together/description/).

---

## ⚙️ How to Build

1. Ensure **CMake (3.29 or higher)** is installed on your system.
2. Clone the repository:
   ```bash
   git clone https://github.com/KamiVo/Leetcode.git
   cd Leetcode
   ```
3. Create a build directory and navigate into it:
  `mkdir build && cd build`
4. Configure the project with CMake:
  `cmake..`
5. Build the project:
  `cmake --build.`

---

## ▶️ How to Run

After building the project, you can execute solutions for individual problems. For example, to run the solution for problem **1507 - Reformat Date**:
  ```bash
  ./1507_Reformat_Date
  ```

---

## ✨ Solutions Overview

### **1507 - Reformat Date**
- **Problem**: Convert a date string from the format `"Day Month Year"` to `"YYYY-MM-DD"`.
- **Example**: `"20th Oct 2052"` → `"2052-10-20"`

### **1332 - Remove Palindromic Subsequences**
- **Problem**: Given a string of letters `a` and `b`, return the **minimum number of steps** to make the string empty by removing palindromic subsequences.
- **Hint**: The solution involves simple string checks for palindromes.

### **2409 - Count Days Spent Together**
- **Problem**: Given Alice's and Bob's **arrival** and **departure dates** (in `"MM-DD"` format), calculate the total number of days they were together in the same city.
- **Example**: `"08-15"` to `"08-18"` for Alice and `"08-16"` to `"08-20"` for Bob → `3 days`.

---

## 🤝 Contributing

Contributions are welcome! Here's how you can contribute:
1. **Fork** the repository.
2. Create a new branch:
```bash
git checkout -b feature/YourFeatureName
```
3. Commit your changes:
```sh
git commit -m "Add feature: YourFeatureName"
```
4. Push to the branch:
```sh
git push origin feature/YourFeatureName
```
5. Open a **Pull Request** and describe your changes!

---

## 📜 License

This project is licensed under the [MIT License](LICENSE).

---

### 🌟 Happy Coding and Keep Solving! 🎯
