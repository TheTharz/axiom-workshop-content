#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Example input
    vector<int> vec = {1, 3, 5, 7, 9};
    int target = 6;

    // Use the lower_bound function to find the position
    auto it = lower_bound(vec.begin(), vec.end(), target);

    // Check if the iterator points to the end
    if (it != vec.end()) {
        // Calculate the index of the element
        int index = distance(vec.begin(), it);
        cout << "The first element greater than or equal to " << target << " is at index " << index << endl;
    } else {
        // Element not found, iterator points to the end
        cout << "No element is greater than or equal to " << target << endl;
    }

    return 0;
}

// Explanation:
// The program starts by including the necessary headers: iostream, vector, and algorithm.
// We use the standard namespace to avoid prefixing standard library names with std::.

// In the main function, we initialize a sorted vector vec with example input {1, 3, 5, 7, 9} and a target value of 6.
// We then use the lower_bound function from the algorithm header to find the position of the first element
// that is greater than or equal to the target value.

// The lower_bound function returns an iterator pointing to the first element not less than the target value.
// If the iterator is not equal to vec.end(), it means that the element was found, and we calculate the index of the element
// usin
