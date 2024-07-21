#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Example input
    vector<int> vec = {10, 20, 30, 40, 50};
    int target = 30;

    // Use the find function to search for the target element
    auto it = find(vec.begin(), vec.end(), target);

    // Check if the element was found
    if (it != vec.end()) {
        // Element found, get the index
        int index = distance(vec.begin(), it);
        cout << "Element " << target << " found at index " << index << endl;
    } else {
        // Element not found
        cout << "Element " << target << " not found" << endl;
    }

    return 0;
}

// Explanation:
// The program starts by including the necessary headers: iostream, vector, and algorithm.
// We use the standard namespace to avoid prefixing standard library names with std::.

// In the main function, we initialize a vector vec with example input {10, 20, 30, 40, 50} and a target value of 30.
// We then use the find function from the algorithm header to search for the target element in the vector.
// The find function returns an iterator pointing to the first occurrence of the target element, or to vec.end() if the element is not found.

// We check if the iterator is not equal to vec.end() to determine if the element was found.
// If found, we calculate the index of the element using the distance function and print it.
// If not found, we print a message indicating that the element was not found.
