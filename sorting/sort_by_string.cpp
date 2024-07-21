#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool customComparatorByLength(string a, string b) {
    return a.length() < b.length();
}

int main(){
      vector<string> arr = {"abc", "ab", "abcd", "a"};
      // {"a", "ab", "abc", "abcd"}
      sort(arr.begin(), arr.end(), customComparatorByLength);
  
      for (string s : arr) {
          cout << s << " ";
      }
  
      return 0;
}

/*
How Sorting Works:

Comparison: The sort function uses the comparator to compare pairs of elements in the range. For each pair, it uses the comparator to determine their order.
Swapping: Based on the result of the comparator, the sort function swaps elements if necessary to ensure the correct order.
Sorting Algorithm: The underlying sorting algorithm (usually a variant of QuickSort, MergeSort, or IntroSort) uses the comparator to guide its sorting decisions.
*/