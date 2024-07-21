#include <iostream>
#include <vector>

using namespace std;

// Function to swap two elements
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to perform partition operation for quicksort
int partition(vector<int> &nums, int low, int high) {
    int pivot = nums[high];
    int i = low - 1;

    for (int j = low; j < high; ++j) {
        if (nums[j] > pivot) {
            ++i;
            swap(nums[i], nums[j]);
        }
    }
    swap(nums[i + 1], nums[high]);
    return i + 1;
}

// Function to perform quicksort
void quicksort(vector<int> &nums, int low, int high) {
    if (low < high) {
        int pi = partition(nums, low, high);
        quicksort(nums, low, pi - 1);
        quicksort(nums, pi + 1, high);
    }
}

// Function to find the Kth largest element
int findKthLargestElement(vector<int> &nums, int k) {
    quicksort(nums, 0, nums.size() - 1);
    return nums[k - 1];
}

int main() {
    vector<int> nums = {3, 2, 1, 5, 6, 4};
    int k = 2;

    cout << k << "th largest element is " << findKthLargestElement(nums, k) << endl;

    return 0;
}
