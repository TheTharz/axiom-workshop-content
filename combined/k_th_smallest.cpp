#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int countLessEqual(const vector<vector<int>>& matrix, int mid) {
    int n = matrix.size();
    int count = 0;
    int row = n - 1, col = 0;

    // Traverse from bottom-left corner
    while (row >= 0 && col < n) {
        if (matrix[row][col] <= mid) {
            // All elements in this row up to the current column are <= mid
            count += (row + 1);
            col++;
        } else {
            // Move up in the row if the current element is greater than mid
            row--;
        }
    }

    return count;
}

int findKthSmallest(const vector<vector<int>>& matrix, int K) {
    int n = matrix.size();
    int left = matrix[0][0];
    int right = matrix[n - 1][n - 1];
    int result = -1;

    // Perform binary search on the range of matrix values
    while (left <= right) {
        int mid = left + (right - left) / 2;
        int count = countLessEqual(matrix, mid);

        if (count < K) {
            left = mid + 1;
        } else {
            result = mid;
            right = mid - 1;
        }
    }

    return result;
}

int main() {
    // Example input
    vector<vector<int>> matrix = {{1, 5, 9},
                                  {10, 11, 13},
                                  {12, 13, 15}};
    int K = 8;

    // Find the Kth smallest element
    int result = findKthSmallest(matrix, K);

    // Output the result
    cout << "The " << K << "th smallest element is " << result << endl;

    return 0;
}

// Explanation:
// The program starts by including the necessary headers: iostream and vector.
// We use the standard namespace to avoid prefixing standard library names with std::.

// The countLessEqual function counts the number of elements in the matrix that are less than or equal to a given value `mid`.
// - It starts from the bottom-left corner of the matrix and moves right if the current element is <= mid.
// - If the current element is greater than mid, it moves up to the previous row.

// The findKthSmallest function uses binary search to find the Kth smallest element.
// - It initializes the binary search range with the smallest and largest elements in the matrix.
// - It repeatedly narrows down the search range based on the count of elements <= mid.
// - If there are fewer than K elements <= mid, it moves the search range up; otherwise, it narrows it down and updates the result.

// In the main function, we initialize the matrix and K with example input and call the `findKthSmallest` function to get the result.
// We then print the Kth smallest element.
