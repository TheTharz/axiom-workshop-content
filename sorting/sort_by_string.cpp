#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool customComparatorByLength(string a, string b) {
    return a.length() < b.length();
}

int main(){
      vector<string> arr = {"abc", "ab","abce", "abcd", "a"};
      // {"a", "ab", "abc", "abcd"}
      sort(arr.begin(), arr.end(), customComparatorByLength);
  
      for (string s : arr) {
          cout << s << " ";
      }
  
      return 0;
}
