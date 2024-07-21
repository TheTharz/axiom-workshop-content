#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Example input
    vector<int> vec = {1, 3, 5, 7, 9};
    int target = 6;

    // Use the upper_bound function to find the position
    auto it = upper_bound(vec.begin(), vec.end(), target);

    // Check if the iterator points to the end
    if (it != vec.end()) {
        // Calculate the index of the position
        int index = distance(vec.begin(), it);
        cout << "The position just past the last element less than " << target << " is at index " << index << endl;
    } else {
        // Position not found, iterator points to the end
        cout << "All elements are less than " << target << endl;
    }

    return 0;
}

// Explanation:
// The program starts by including the necessary headers: iostream, vector, and algorithm.
// We use the standard namespace to avoid prefixing standard library names with std::.

// In the main function, we initialize a sorted vector vec with example input {1, 3, 5, 7, 9} and a target value of 6.
// We then use the upper_bound function from the algorithm header to find the position just past the last element
// that is less than the target value.

// The upper_bound function returns an iterator pointing to the first element greater than the target value.
// If the iterator is not equal to vec.end(), it means that the position was found, and we calculate the index
// using the distance function and print it.
// If the iterator points to the end of the vector, all elements are less than the target, and we print a corresponding message.
