# Arrays

## AIM - 
To understand arrays in C++ focusing on the fundamental operations, and basic algorithmic applications.  

## Software Used - 
VS Code

## Theory

An array is a data structure in C++ that allows you to store multiple values of the same data type in a single, contiguous block of memory. Arrays are a fundamental concept in programming and provide a way to organize and manage data efficiently.Arrays are a powerful tool in C++ for storing and manipulating collections of data. While they come with some limitations, their simplicity and efficiency make them a fundamental building block in many algorithms and data structures. Understanding how to effectively use arrays is crucial for any programmer working in C++.


## *Common Operations on Arrays*

- *Traversing*: Looping through the array elements to access or modify them.
- *Searching*: Finding the location of a specific element in the array.
- *Sorting*: Arranging the elements of the array in a specific order (ascending or descending).
- *Insertion and Deletion*: Adding or removing elements (though this can be tricky due to the fixed size of arrays).

## 1. *Finding Maximum and Minimum in an Array*

### *Algorithm:*
1. Start.
2. Initialize an array arr of size n.
3. Set max = arr[0] and min = arr[0].
4. Loop through each element in the array:
   - If arr[i] > max, update max = arr[i].
   - If arr[i] < min, update min = arr[i].
5. Output max and min.
6. End.


 ## 2. *Printing an Array*

### *Algorithm:*
1. Start.
2. Initialize an array arr of size n.
3. Loop through each element in the array:
   - Print arr[i].
4. End.


 ## 3. *Searching for an Element in an Array*

### *Algorithm:*
1. Start.
2. Initialize an array arr of size n.
3. Set the target element as key.
4. Loop through each element in the array:
   - If arr[i] == key, return the index i.
5. If key is not found, return -1.
6. End.


## 4. *Finding the Sum and Average of an Array*

### *Algorithm:*
1. Start.
2. Initialize an array arr of size n.
3. Initialize sum = 0.
4. Loop through each element in the array:
   - Add arr[i] to sum.
5. Calculate the average as average = sum / n.
6. Output sum and average.
7. End.



## Conclusion
Learned about basics of arrays and performed programs using arrays
