🧠 C++ Coder Platform

A local, C++-based coding practice platform inspired by LeetCode, designed for practicing data structures, algorithms, and core C++ concepts in a controlled, offline environment.

This project allows you to:

Load coding problems from files

Write solutions in C++

Compile and execute them automatically

Validate solutions against predefined test cases

Receive immediate feedback (Accepted / Wrong Answer)

🚀 Motivation

Most online platforms abstract away:

Compilation

Runtime behavior

Memory usage

Toolchain control

This project is built to:

Strengthen C++ fundamentals

Simulate real interview conditions

Provide hands-on experience with compilers, execution, and judging

Be fully hackable and extensible

📁 Project Structure
c++_coder_project/
├── README.md
├── engine/
│   ├── main.cpp          # Entry point of the platform
│   ├── problem_loader.cpp# Reads and parses problem files
│   ├── template_gen.cpp  # Generates solution.cpp template
│   ├── compiler.cpp      # Compiles user code
│   ├── runner.cpp        # Executes compiled binaries
│   ├── judge.cpp         # Compares output with expected results
│   └── utils.cpp         # Helper utilities
│
├── problems/
│   ├── two_sum/
│   │   ├── problem.txt
│   │   ├── testcases.txt
│   │   └── expected.txt
│   └── palindrome/
│
├── workspace/
│   ├── solution.cpp      # Auto-generated user solution file
│   ├── output.txt        # Program output
│   └── compile.log
│
└── build/
    └── coder              # Compiled platform executable

⚙️ How It Works

Problem Selection

A problem directory is selected from problems/

Template Generation

A C++ template (solution.cpp) is generated with:

User-editable function

Platform-controlled main()

Code Editing

The platform opens the solution file in the system editor

Compilation

The code is compiled using g++

Execution

The compiled binary is executed against test cases

Judging

Output is compared with expected results

Result is reported (Accepted / Wrong Answer)

🛠️ Requirements

Linux (Ubuntu recommended)

g++ (C++17 or later)

A terminal-based editor or VS Code

🧪 Supported Problem Types (Initial)

Arrays

Strings

Basic STL usage

Queues / Stacks

(Advanced structures like trees and graphs will be added later.)

📌 Current Status

 Project structure created

 README defined

 Problem file parser

 Code template generator

 Compilation and execution engine

 Multi-testcase judging

 Runtime and safety checks

🌱 Future Enhancements

Execution time measurement

Memory usage limits

Colored CLI output

Difficulty tagging

Progress tracking

Support for trees and graphs

📄 License

This project is for personal learning and practice.
