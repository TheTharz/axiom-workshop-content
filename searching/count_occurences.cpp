#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Example input
    vector<int> vec = {1, 2, 3, 2, 4, 2};
    int target = 2;

    // Use the count function to count occurrences of the target element
    int occurrences = count(vec.begin(), vec.end(), target);

    // Output the result
    cout << "Element " << target << " occurs " << occurrences << " times" << endl;

    return 0;
}

// Explanation:
// The program starts by including the necessary headers: iostream, vector, and algorithm.
// We use the standard namespace to avoid prefixing standard library names with std::.

// In the main function, we initialize a vector vec with example input {1, 2, 3, 2, 4, 2} and a target value of 2.
// We then use the count function from the algorithm header to count the number of occurrences of the target element in the vector.

// The count function returns the number of elements in the specified range (from vec.begin() to vec.end()) that are equal to the target value.
// We then print the number of occurrences of the target element.
