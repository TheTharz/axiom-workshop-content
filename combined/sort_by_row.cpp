#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

void sortRowsOfMatrix(vector<vector<int>>& matrix) {
    for (auto& row : matrix) {
        sort(row.begin(), row.end());
    }
}

int main() {
    // Example input
    vector<vector<int>> matrix = {{4, 2, 7},
                                  {1, 5, 3},
                                  {9, 8, 6}};

    // Sort each row of the matrix
    sortRowsOfMatrix(matrix);

    // Output the sorted matrix
    cout << "Matrix with sorted rows is:" << endl;
    printMatrix(matrix);

    return 0;
}

// Explanation:
// The program starts by including the necessary headers: iostream and vector.
// We use the standard namespace to avoid prefixing standard library names with std::.

// The printMatrix function is a helper to print the matrix in a readable format.
// It takes a 2D vector (matrix) and prints its elements row by row.

// The sortRowsOfMatrix function sorts each row of the matrix.
// - It iterates over each row in the matrix and applies the `sort` function from the STL to sort the elements within that row.

// In the main function, we initialize a 2D vector (matrix) with example input and call the `sortRowsOfMatrix` function to sort each row.
// We then print the sorted matrix using the `printMatrix` function.
