https://www.geeksforgeeks.org/introduction-to-arrays-data-structure-and-algorithm-tutorials/

An **array** is a data structure that stores a fixed-size sequence of elements of the same type. It provides a way to organize and manage data efficiently. Here are some key characteristics and features of arrays:

### Characteristics of Arrays:

1. **Fixed Size**: The size of an array is defined when it is created and cannot be changed later. This makes it efficient in 
    terms of memory allocation.

2. **Indexed Access**: Elements in an array can be accessed using their index, which starts from 0 in most programming languages. 
     This allows for fast retrieval and modification of elements.

3. **Homogeneous Elements**: All elements in an array are of the same data type (e.g., all integers, all floats, etc.).

4. **Contiguous Memory Allocation**: Elements are stored in contiguous memory locations, which helps in optimizing access speed.

### Common Operations:

- **Access**: Retrieve an element using its index.
- **Insertion**: Add an element at a specific index (in some languages, this may require shifting elements).
- **Deletion**: Remove an element from a specific index (also may require shifting).
- **Traversal**: Iterate through all elements in the array.

### Example:

In Python, you can create and use an array (or a list, which is a dynamic array):

```python
# Creating an array (list in Python)
arr = [10, 20, 30, 40, 50]

# Accessing an element
print(arr[2])  # Output: 30

# Modifying an element
arr[1] = 25

# Traversing the array
for element in arr:
    print(element)
```

### Use Cases:

Arrays are widely used in various applications, including:

- Storing collections of data (like lists of numbers).
- Implementing other data structures (like stacks and queues).
- Performing mathematical computations (like matrices).

While arrays are efficient for indexed access, they may not be the best choice for scenarios that require frequent insertions or 
deletions, where dynamic data structures like linked lists may be more appropriate.