
---

# Simple Calculator in C

## This is a Lab Assignment
- Name: Tanmay Haldar
- Dept: BCA
- Sem: 2
- Roll No: 30001223044
- Reg No: 233001010518

## Overview

This is a simple command-line calculator program written in C. The calculator performs basic arithmetic operations such as addition, subtraction, multiplication, and division. The program is designed to be easy to understand and serves as a basic example of using control structures in C.

## Features

- **Addition:** Add two numbers.
- **Subtraction:** Subtract one number from another.
- **Multiplication:** Multiply two numbers.
- **Division:** Divide one number by another (with error handling for division by zero).
- **Menu-based Interface:** Select operations using a simple numeric menu.

## Prerequisites

To compile and run this program, you need:

- A C compiler (e.g., GCC)
- A command-line interface (CLI) or terminal

## How to Compile and Run

1. **Download the Code:**
   - Save the C program code in a file named `calculator.c`.

2. **Compile the Code:**
   - Open your terminal or command-line interface.
   - Navigate to the directory where `calculator.c` is saved.
   - Compile the program using the following command:
     ```bash
     gcc calculator.c -o calculator
     ```

3. **Run the Program:**
   - After successful compilation, run the program with the following command:
     ```bash
     ./calculator
     ```

4. **Using the Calculator:**
   - You will see a menu with options to perform addition, subtraction, multiplication, and division.
   - Enter the number corresponding to the operation you want to perform.
   - If you select an arithmetic operation, you will be prompted to enter two numbers.
   - The program will display the result of the operation.
   - To exit the program, choose the "Exit" option from the menu.

## Example Usage

Here's an example of how the program works:

```text
Simple Calculator
-----------------
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Exit

Enter your choice (1-5): 1
Enter two numbers: 10 20
Result: 10.00 + 20.00 = 30.00

Enter your choice (1-5): 5
Exiting the program.
```

## Error Handling

- **Division by Zero:** The program checks for division by zero and prevents it by displaying an error message.

## Customization

You can modify this program to include more advanced features such as:

- **Handling more than two numbers** in operations.
- **Support for additional operations** (e.g., modulus, power).
- **Implementing a graphical user interface (GUI)** for a more user-friendly experience.
- **Including support for floating-point precision operations**.

## License

This project is open-source and available under the [MIT License](LICENSE). Feel free to use, modify, and distribute it as you see fit.

## Contribution

If you find any issues or have suggestions for improvement, feel free to create an issue or submit a pull request on the GitHub repository.

---