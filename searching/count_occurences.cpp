#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Example input
    vector<int> vec = {1, 2, 3, 2, 4, 2};
    int target = 2;

    int occurrences = count(vec.begin(), vec.end(), target);

    cout << "Element " << target << " occurs " << occurrences << " times" << endl;

    return 0;
}
