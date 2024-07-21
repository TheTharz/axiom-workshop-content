#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxSumSubarray(const vector<int>& arr) {
    // Initialize variables
    int max_current = arr[0];
    int max_global = arr[0];

    // Iterate through the array
    for (size_t i = 1; i < arr.size(); ++i) {
        // Update max_current to include the current element
        max_current = max(arr[i], max_current + arr[i]);
        // Update max_global if max_current is greater
        max_global = max(max_global, max_current);
    }

    return max_global;
}

int main() {
    // Example input
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    // Find the maximum sum subarray
    int result = maxSumSubarray(arr);

    // Output the result
    cout << "The maximum sum of the contiguous subarray is " << result << endl;

    return 0;
}

// Explanation:
// The program starts by including the necessary headers: iostream and vector.
// We use the standard namespace to avoid prefixing standard library names with std::.

// The maxSumSubarray function takes a vector of integers as input and uses Kadane's Algorithm to find the maximum sum of a contiguous subarray.
// - Initialize `max_current` and `max_global` with the first element of the array.
// - Iterate through the array starting from the second element.
// - For each element, update `max_current` to be either the current element alone or the current element added to the previous `max_current`.
// - Update `max_global` if `max_current` is greater than the current `max_global`.
// - Return `max_global` which holds the maximum sum of the contiguous subarray.

// In the main function, we initialize the array with example input and call the `maxSumSubarray` function to get the result.
// We then print the maximum sum of the contiguous subarray.
