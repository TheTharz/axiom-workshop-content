#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> removeDuplicates(vector<int>& arr) {
    if (arr.empty()) return arr;

    auto newEnd = unique(arr.begin(), arr.end());

    arr.erase(newEnd, arr.end());

    return arr;
}

int main() {
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4, 5};

    vector<int> uniqueArr = removeDuplicates(arr);

    for (int num : uniqueArr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
