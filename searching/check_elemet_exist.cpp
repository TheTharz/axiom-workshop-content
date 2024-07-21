#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Example input
    vector<int> vec = {1, 3, 5, 7, 9};
    int target = 5;

    // Use the binary_search function to check for the target element
    bool found = binary_search(vec.begin(), vec.end(), target);

    // Output the result
    if (found) {
        cout << "Element " << target << " found" << endl;
    } else {
        cout << "Element " << target << " not found" << endl;
    }

    return 0;
}