#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int findKthLargestElement (vector<int> &nums, int k) {
    sort(nums.begin(), nums.end(), greater<int>());
    return nums[k-1];
}

int main(){

    vector<int> nums = {3, 2, 1, 5, 6, 4};
    // {6, 5, 4, 3, 2, 1}
    int k = 2;

    cout<< k <<" largest element is "<< findKthLargestElement(nums, k) << endl;

    return 0;
}

/*
Explanation:
For example, if nums = {3, 2, 1, 5, 6, 4}:
- After sorting in descending order, nums becomes {6, 5, 4, 3, 2, 1}.

To find the Kth largest element, we access the element at index k - 1 (0-based index):
- For k = 2, we need to find the 2nd largest element, which is at index 2 - 1 = 1.
- Therefore, the 2nd largest element is nums[1], which is 5.
*/