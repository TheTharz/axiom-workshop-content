#include <iostream>
#include <vector>

using namespace std;

// Function to find all pairs with a given sum using the two-pointer technique
vector<pair<int, int>> findPairsWithSum(const vector<int>& arr, int target) {
    vector<pair<int, int>> pairs;
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int currentSum = arr[left] + arr[right];
        if (currentSum == target) {
            pairs.emplace_back(arr[left], arr[right]);
            ++left;
            --right;
        } else if (currentSum < target) {
            ++left;
        } else {
            --right;
        }
    }

    return pairs;
}

int main() {
    // Example input
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int target = 7;

    // Find pairs with the given sum
    vector<pair<int, int>> result = findPairsWithSum(arr, target);

    // Output the pairs
    for (const auto& p : result) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;

    return 0;
}

// Explanation:
// The program starts by including the necessary headers: iostream and vector.
// We use the standard namespace to avoid prefixing standard library names with std::.

// The function findPairsWithSum is defined, which takes a vector of integers arr and an integer target as parameters.
// It uses the two-pointer technique to find all pairs that sum up to the target.

// The two-pointer technique involves:
// 1. Initializing two pointers, one at the beginning (left) and one at the end (right) of the array.
// 2. Calculating the sum of the elements pointed to by the two pointers.
// 3. If the sum equals the target, add the pair to the result and move both pointers inward.
// 4. If the sum is less than the target, move the left pointer to the right to increase the sum.
// 5. If the sum is greater than the target, move the right pointer to the left to decrease the sum.

// In the main function, we initialize a vector arr and a target value with example inputs.
// We then call findPairsWithSum to find the pairs and print the result. For the given example input, the output will be {(1, 6), (2, 5), (3, 4)}.
