#include <iostream>

using namespace std;

int main() {
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    cout << "Traversing the 2D array using nested loops:" << endl;
    // Traverse rows
    for (int i = 0; i < 3; ++i) {
        // Traverse columns
        for (int j = 0; j < 4; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
