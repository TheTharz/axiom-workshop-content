#include <iostream>

using namespace std;

int main() {
    int matrix[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    // Accessing elements
    cout << "Element at [0][0]: " << matrix[0][0] << endl; // 10
    cout << "Element at [1][2]: " << matrix[1][2] << endl; // 60
    cout << "Element at [2][1]: " << matrix[2][1] << endl; // 80

    return 0;
}
