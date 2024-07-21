#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to remove duplicates from a sorted array
vector<int> removeDuplicates(vector<int>& arr) {
    if (arr.empty()) return arr;

    // Use the unique algorithm to remove duplicates
    // The unique function removes consecutive duplicates and returns a new end iterator
    auto newEnd = unique(arr.begin(), arr.end());

    // Resize the vector to remove the extra elements
    arr.erase(newEnd, arr.end());

    return arr;
}

int main() {
    // Example input
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4, 5};

    // Remove duplicates
    vector<int> uniqueArr = removeDuplicates(arr);

    // Output the array with duplicates removed
    for (int num : uniqueArr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

// Explanation:
// The program starts by including the necessary headers: iostream, vector, and algorithm.
// We use the standard namespace to avoid prefixing standard library names with std::.

// The function removeDuplicates is defined, which takes a vector of integers arr as a parameter.
// It removes duplicates from the sorted vector using the unique algorithm.

// The unique function from the algorithm header removes adjacent duplicates and returns a new end iterator,
// which points to the end of the new array without duplicates.

// We then resize the vector to remove the extra elements beyond the new end iterator using the erase function.

// In the main function, we initialize a vector arr with the example input {1, 1, 2, 3, 3, 4, 4, 5}.
// We then call removeDuplicates to remove duplicates and print the result. For the given example input, the output will be {1, 2, 3, 4, 5}.
