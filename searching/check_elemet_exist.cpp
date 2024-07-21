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

// Explanation:
// The program starts by including the necessary headers: iostream, vector, and algorithm.
// We use the standard namespace to avoid prefixing standard library names with std::.

// In the main function, we initialize a sorted vector vec with example input {1, 3, 5, 7, 9} and a target value of 5.
// We then use the binary_search function from the algorithm header to check if the target element exists in the vector.
// The binary_search function requires that the vector be sorted; it returns true if the element is found and false otherwise.

// We then output the result based on whether the element was found or not.
