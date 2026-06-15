# 🚀 DSA-Cpp

> **Data Structures & Algorithms in C++** — A clean, beginner-friendly, and interview-ready collection of DSA implementations. Built for learning, competitive programming, and placement prep.

[![Language](https://img.shields.io/badge/C%2B%2B-17-blue?logo=c++)](https://isocpp.org)
[![License](https://img.shields.io/badge/license-MIT-yellow)](LICENSE)
[![Status](https://img.shields.io/badge/status-active-brightgreen)](https://github.com/ananyaSrivastavaa9/DSA-Cpp)
⭐ If this helped you, give it a star!

---

## 📖 About

This repository documents my journey mastering **Data Structures & Algorithms using C++**. Every solution is:

- ✅ **Clean & readable** — beginner-friendly code
- ✅ **Commented** — logic explained step-by-step
- ✅ **Annotated** — time & space complexity included
- ✅ **Tested** — works with sample inputs

Perfect for:
- 🎯 Interview & placement prep
- 🏆 Competitive programming practice
- 🧠 Strengthening fundamentals for AI/ML

---

## 🗂️ Repository Structure

| Folder | What's Inside |
|--------|---------------|
| `Arrays/` | Array problems, linear/binary search, utilities |
| `BasicsOfCpp/` | C++ foundation: I/O, loops, functions, pointers |
| `Leetcode/` | Selected LeetCode problems (tagged by number) |
| `Pattern/` | Pattern printing challenges |
| `STL/` | C++ STL algorithms & container examples |
| `Strings/` | String algorithms & manipulation utilities |
| `Vectors/` | Vector-based implementations |
| `pointers/` | Pointer examples & valid comparisons |
| `sorting/` | Sorting algorithms (optimized) |

---

## 🛠️ Installation & Running

```bash
# 1. Clone the repo
git clone https://github.com/ananyaSrivastavaa9/DSA-Cpp.git
cd DSA-Cpp

# 2. Compile a file (C++17)
g++ -std=c++17 solution.cpp -O2 -o sol

# 3. Run
./sol
```

---

## 📚 Learning Path (Recommended Order)
BasicsOfCpp → Arrays → Strings → Vectors → Pointers → STL → sorting → Core DS (Stack, Queue, Linked Lists) → Leetcode → Patterns → Advanced (DP, Graphs)

### Each file includes:
1. Problem description
2. Approach & logic
3. Complexity analysis: **Time: O(...)** | **Space: O(...)**
4. Sample input/output (where applicable)

---

## 💡 Quick Examples

### Binary Search
```cpp
// Time: O(log n) | Space: O(1)
int binarySearch(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}
```

### Bubble Sort (Optimized)
```cpp
// Time: O(n²) | Space: O(1)
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}
```

---

## 🤝 Contributing

This is a **learning-focused** repo, but contributions are welcome!

### What I welcome:
- 🐛 Bug fixes & corrections
- ⚡ Optimizations (better time/space)
- 📝 Enhanced explanations or test cases
- 🆕 New problems (organized in existing folders)

### How to contribute:
```bash
1. Fork the repo
2. Create a branch: git checkout -b feat/your-change
3. Make changes + add comments & complexity
4. Open a PR with description
```

---

## 🎨 Coding Style

- **Standard**: C++17
- **Indentation**: 4 spaces
- **Naming**: Meaningful variable & function names
- **Comments**: Explain tricky logic + complexity at top of file
- **Functions**: Short, focused, reusable

---

## 📜 License

This project is licensed under the **MIT License**. See [LICENSE](LICENSE) for details.

---

## 👤 Author & Contact

**Ananya Srivastava**  
🎓 BTech CSE (AI & Machine Learning)  
�GitHub: [ananyaSrivastavaa9](https://github.com/ananyaSrivastavaa9)  
📧 Email: *(add your email here)*  

---

## 🙏 Acknowledgements

Thanks to the open-source community, online judges, and tutorial creators that inspired and helped during this learning journey.

---

## 🌟 Support

If you find this repository helpful:

- ⭐ **Give it a star**
- 🦊 **Fork it** for your practice
- 📢 **Share** with fellow learners

---

> **Built with passion for learning DSA. Happy coding! 🚀**