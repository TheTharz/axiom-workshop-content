#include <iostream>
#include <vector>
#include <algorithm> // this library hold some sorting algorithms

using namespace std;

// k th largest element
// k = 2

// arr = {1, 20,50,48,478,2}

// sorted_arr = {478, 50, 48, 20, 2, 1} // descending

// index of first element is 0
// index of second element is 1
// index of third element is 2
// index of fourth element is 3
// ; 
// ;

// index of kth element is k-1
// sorted_arr[]


int findKthLargestElement (vector<int> &nums, int k) {
    //remove duplicates
    sort(nums.begin(), nums.end(), greater<int>()); //algorithm library
    return nums[k-1];
}

int main(){

    vector<int> nums = {3, 2, 1, 5, 6, 4,6};
    // {6, 5, 4, 3, 2, 1}
    int k = 2;

    cout<< k <<" largest element is "<< findKthLargestElement(nums, k) << endl;

    return 0;
}
