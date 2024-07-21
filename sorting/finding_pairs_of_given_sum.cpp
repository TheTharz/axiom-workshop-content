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
