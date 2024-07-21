#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vec = {10, 20, 30, 40, 50};
    int target = 300;

    auto it = find(vec.begin(), vec.end(), target);

    if (it != vec.end()) {
        int index = distance(vec.begin(), it);
        cout << "Element " << target << " found at index " << index << endl;
    } else {
        cout << "Element " << target << " not found" << endl;
    }
    return 0;
}
