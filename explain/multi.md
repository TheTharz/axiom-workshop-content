## Multidimensional Arrays

Multidimensional arrays are arrays of arrays, which can be thought of as tables or matrices. They allow you to store data in a grid-like structure with multiple dimensions.

### Concept

1. **One-Dimensional Array:**

   - A simple list of elements.
   - Example: `int arr[5] = {1, 2, 3, 4, 5};`

   ![1D Array](https://cdn.programiz.com/sites/tutorial2program/files/c-array-declaration.jpg)
   _Each element is accessed using a single index._

2. **Two-Dimensional Array:**

   - A table or matrix with rows and columns.
   - Example: `int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};`

   ![2D Array](https://cdn.programiz.com/sites/tutorial2program/files/two-dimensional-array_0.jpg)
   _Each element is accessed using two indices: `matrix[row][column]`._

3. **Three-Dimensional Array:**

   - An array of 2D arrays, like a 3D grid.
   - Example: `int cube[2][3][4] = {{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}}, {{13, 14, 15, 16}, {17, 18, 19, 20}, {21, 22, 23, 24}}};`

   ![3D Array](https://media.geeksforgeeks.org/wp-content/uploads/3D-array.jpg)
   _Each element is accessed using three indices: `cube[z][row][column]`._
