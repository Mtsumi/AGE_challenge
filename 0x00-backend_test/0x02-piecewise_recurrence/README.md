#### Method 1: Recursive Approach
**Advantages:**
- This approach follows the definition of the recurrence relation closely, making it easy to understand and implement.
- It is concise and simple and easy to read.

**Disadvantages:**
- Inefficient for large values of n since it recalculates same numbers multiple times, no storage of computed values
- It computes in exponential time complexity, leading to slow performance.
- Can lead to stack overflow errors in case of large values due to excessive function calls.

#### Method 2: Iterative Approach using Dynamic Programming
**Advantages:**
- Avoids redundant calculations by using an array to store previously computed numbers.
- Linear time complexity O(n), making it much faster than recursion.
- No risk of stack overflow.

**Disadvantages:**
- Requires additional memory to store the array of numbers.
- Code is more complex compared to using recursion.

#### Method 3: Memoization (Top-Down Approach)
**Advantages:**
- Avoids redundant calculations by storing numbers in a memoization array.
- Linear time complexity when memoization is used effectively.

**Disadvantages:**
- Requires additional memory for the memoization array.
- A bit more complex than the iteration with dynamic programming.
- May involve some overhead due to function calls and memoization array management.

#### Summary:

The recursive approach is simple to understand but inefficient for large values of n. 
The iterative approach using dynamic programming is efficient and avoids redundant calculations.
The memoization approach offers a trade-off between recursion and dynamic programming, reducing redundant calculations when implemented correctly.

