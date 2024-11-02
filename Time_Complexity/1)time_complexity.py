https://www.geeksforgeeks.org/understanding-time-complexity-simple-examples/

Time complexity is a way to analyze how the runtime of an algorithm changes as the size of the input data increases. 
It provides a high-level understanding of the efficiency of an algorithm, often expressed using Big O notation. 


Here are some common time complexities:
1. O(1): 
   Constant time - 
   The algorithm's runtime does not change with the size of the input.

2. O(log n):
   Logarithmic time - 
   The runtime grows logarithmically as the input size increases, often seen in algorithms that divide the problem 
   size in each step (e.g., binary search).

3. O(n): 
   Linear time - 
   The runtime grows linearly with the input size. An example is a simple loop through an array.

4. O(n log n): 
   Linearithmic time - 
   Common in efficient sorting algorithms like mergesort and heapsort.

5. O(n²): 
   Quadratic time - 
   The runtime grows quadratically, often seen in algorithms with nested loops (e.g., bubble sort).

6. O(2^n): 
   Exponential time - 
   The runtime doubles with each additional input element, typical in recursive algorithms that solve problems by exploring all 
   possibilities (e.g., the Fibonacci sequence using naive recursion).
7. O(n!): 
   Factorial time - 
   The runtime grows factorially, common in algorithms that generate all permutations of a set.