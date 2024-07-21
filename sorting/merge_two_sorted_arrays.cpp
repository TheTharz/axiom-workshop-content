#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> mergeSortedArrays(const vector<int>& arr1, const vector<int>& arr2) {
    vector<int> merged;
    int i = 0, j = 0;

    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            merged.push_back(arr1[i]);
            ++i;
        } else {
            merged.push_back(arr2[j]);
            ++j;
        }
    }

    while (i < arr1.size()) {
        merged.push_back(arr1[i]);
        ++i;
    }

    while (j < arr2.size()) {
        merged.push_back(arr2[j]);
        ++j;
    }

    return merged;
}

int main() {
    // Example inputs
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8};

    // Merge the sorted arrays
    vector<int> merged = mergeSortedArrays(arr1, arr2);

    // Output the merged array
    for (int num : merged) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
