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
    vector<vector<int>> transpose(n, vector<int>(n)); 

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
