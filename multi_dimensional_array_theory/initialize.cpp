#include <iostream>

using namespace std;

int main() {
    // Declaration and initialization of a 2D array
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Displaying the 2D array
    cout << "2D Array (Matrix):" << endl;



    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // // Declaration of a 3D array
    // int cube[2][3][4] = {
    //     {
    //         {1, 2, 3, 4},
    //         {5, 6, 7, 8},
    //         {9, 10, 11, 12}
    //     },
    //     {
    //         {13, 14, 15, 16},
    //         {17, 18, 19, 20},
    //         {21, 22, 23, 24}
    //     }
    // };

    

    // // Displaying the 3D array
    // cout << "3D Array (Cube):" << endl;
    // for (int k = 0; k < 2; ++k) {
    //     cout << "Layer " << k << ":" << endl;
    //     for (int i = 0; i < 3; ++i) {
    //         for (int j = 0; j < 4; ++j) {
    //             cout << cube[k][i][j] << " ";
    //         }
    //         cout << endl;
    //     }
    //     cout << endl;
    // }

    return 0;
}
