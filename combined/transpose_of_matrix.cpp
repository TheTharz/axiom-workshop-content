#include <iostream>
#include <vector>

using namespace std;

void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

vector<vector<int>> transposeMatrix(const vector<vector<int>>& matrix) {
    int n = matrix.size();
    // Initialize a new matrix for the transpose
    vector<vector<int>> transpose(n, vector<int>(n));

    // Compute the transpose using nested loops
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            transpose[j][i] = matrix[i][j];
        }
    }

    return transpose;
}

int main() {
    // Example input
    vector<vector<int>> matrix = {{1, 2, 3},
                                  {4, 5, 6},
                                  {7, 8, 9}};

    // Compute the transpose
    vector<vector<int>> transpose = transposeMatrix(matrix);

    // Output the transpose
    cout << "Transpose of the matrix is:" << endl;
    printMatrix(transpose);

    return 0;
}

// Explanation:
// The program starts by including the necessary headers: iostream and vector.
// We use the standard namespace to avoid prefixing standard library names with std::.

// The printMatrix function is a helper to print the matrix in a readable format.
// It takes a 2D vector (matrix) and prints its elements row by row.

// The transposeMatrix function takes a 2D vector (matrix) as input and returns its transpose.
// - It initializes a new matrix `transpose` with the same size as the input matrix.
// - Using nested loops, it assigns elements from the original matrix to their transposed positions in the new matrix.
// - The element at position (i, j) in the original matrix is placed at position (j, i) in the transposed matrix.

// In the main function, we initialize a 3x3 matrix with example input and call the `transposeMatrix` function to get the transpose.
// We then print the transpose using the `printMatrix` function.
