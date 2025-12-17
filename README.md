
# C++ Coder Platform 🚀

A **local, C++-based coding practice platform** inspired by LeetCode, designed for algorithm practice, interview preparation, and systems-level learning.

This project allows you to:
- Load coding problems from files
- Write solutions in C++ using your favorite editor
- Compile and execute solutions automatically
- Validate solutions against test cases
- Get instant feedback (Accepted / Wrong Answer)

---

## 📁 Project Structure

```
c++_coder_project/
├── README.md
├── engine/
│   ├── main.cpp          # Entry point for the platform
│   ├── problem_parser.cpp# Parses problem definition files
│   ├── compiler.cpp      # Compiles user solution
│   ├── runner.cpp        # Executes compiled binary
│   ├── judge.cpp         # Compares output with expected results
│   └── utils.h           # Common helpers
│
├── problems/
│   └── two_sum/
│       ├── problem.txt   # Problem description
│       ├── testcases.txt # Input test cases
│       ├── expected.txt  # Expected outputs
│       └── solution.cpp  # Auto-generated template for user
│
├── build/                # Compiled binaries (gitignored)
└── scripts/
    └── run_problem.sh    # Convenience script to run a problem
```

---

## 🧠 How It Works

1. **Problem Definition**
   - Each problem lives in its own folder under `problems/`
   - Includes description, test cases, and expected outputs

2. **Code Generation**
   - The engine generates a `solution.cpp` with:
     - A fixed `main()` (owned by the platform)
     - A function stub for the user to implement

3. **Editor Launch**
   - The platform opens the solution file in your preferred editor

4. **Compilation & Execution**
   - Uses `g++` to compile the code
   - Executes against all test cases

5. **Judging**
   - Compares program output with expected output
   - Stops on first failure or reports success

---

## 🛠️ Requirements

- Linux (Ubuntu recommended)
- `g++` (C++17 or later)
- Any editor (`vim`, `nano`, `code`, etc.)

---

## ▶️ Usage (Planned)

```bash
cd engine
./coder run problems/two_sum
```

Expected output:
```
Running test case 1... PASSED
Running test case 2... PASSED
✔ Accepted
```

---

## 🎯 Project Goals

- Strengthen C++ fundamentals and STL usage
- Practice algorithms & data structures
- Learn system-level programming (processes, files, exec)
- Build an interview-ready, real-world C++ project

---

## 🔮 Future Enhancements

- Time & memory limits
- Support for trees and linked lists
- JSON-based problem format
- Colored CLI output
- Problem difficulty tagging
- Progress tracking

---

## 📌 Author

**Rishit Thakkar**  
Built as a Christmas break systems + C++ learning project 🎄

---

Happy coding! 💻✨
