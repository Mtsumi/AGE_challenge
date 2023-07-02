# Running the Main File with GCC

To run the main file and execute the code, follow the steps below:

1. Ensure that you have GCC (GNU Compiler Collection) installed on your system. GCC is a popular compiler for the C programming language and is widely available on various platforms.

2. Open a terminal or command prompt and navigate to the directory where `main.c` is located.

3. Use the following command to compile the code using GCC:

`gcc main.c utility.c -o output`

Note: output can be any name you want your output file to be.


This command tells GCC to compile `main.c` and create an executable file named `output`.

5. After successful compilation, you can run the program by executing the following command:
`./output`


The `./` prefix is necessary to run the program in the current directory.

6. The program will execute, and you will see the output displayed in the terminal.

The output will include the results of the arithmetic operations and the Fibonacci sequence calculated based on the provided arithmetic operations and conditions.

## Explanation

The provided code demonstrates the usage of the `Node` structure and the `makeFunc` function to perform arithmetic operations and calculate the Fibonacci sequence using dynamic programming.

The `Node` structure is defined as follows:

```c
typedef struct Node {
 TypeTag type;
} Node;

The TypeTag enum defines different arithmetic operations, including ADD, SUB, MUL, DIV, and FIBO.

The makeFunc function is used to create Node instances with the specified operation type and input values.

In the main function, several Node instances are created using makeFunc, representing addition, multiplication, subtraction, and the Fibonacci calculation:

The calc function is then called on each Node instance to perform the respective operation and return the result.

The calc function utilizes the Node structure to determine the operation type and input values and performs the corresponding arithmetic operation or Fibonacci calculation.

By executing the main file, you will see the results of the arithmetic operations and the calculated Fibonacci sequence based on the provided arithmetic operations and conditions.

Note: Ensure that you have the necessary dependencies and libraries installed to compile and run C code on your system. The provided instructions assume a UNIX-like environment. If you're using a different operating system, the commands may vary slightly.


