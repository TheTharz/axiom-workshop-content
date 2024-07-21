#include <iostream>
#include <vector>

using namespace std;

bool searchMatrix(const vector<vector<int>>& matrix, int target) {
    if (matrix.empty() || matrix[0].empty()) {
        return false;
    }

    int m = matrix.size();    // Number of rows
    int n = matrix[0].size(); // Number of columns

    int row = 0;             // Start from the top row
    int col = n - 1;         // Start from the rightmost column

    // Traverse the matrix
    while (row < m && col >= 0) {
        if (matrix[row][col] == target) {
            return true; // Target found
        } else if (matrix[row][col] > target) {
            col--; // Move left if the current element is greater than target
        } else {
            row++; // Move down if the current element is less than target
        }
    }

    return false; // Target not found
}

int main() {
    // Example input
    vector<vector<int>> matrix = {{1, 4, 7, 11},
                                  {2, 5, 8, 12},
                                  {3, 6, 9, 16},
                                  {10, 13, 14, 17}};
    int target = 5;

    // Search for the target value
    bool result = searchMatrix(matrix, target);

    // Output the result
    cout << "Target " << (result ? "found" : "not found") << " in the matrix." << endl;

    return 0;
}

// Explanation:
// The program starts by including the necessary headers: iostream and vector.
// We use the standard namespace to avoid prefixing standard library names with std::.

// The searchMatrix function searches for a target value in a matrix where rows and columns are sorted.
// - It checks if the matrix is empty and returns false if it is.
// - It starts the search from the top-right corner of the matrix.
// - If the current element matches the target, it returns true.
// - If the current element is greater than the target, it moves left to a smaller element.
// - If the current element is less than the target, it moves down to a larger element.
// - If the search reaches the end of the matrix without finding the target, it returns false.

// In the main function, we initialize a matrix and a target value with example input and call the `searchMatrix` function to get the result.
// We then print whether the target was found or not.
