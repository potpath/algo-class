#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

int main() {
  vector<int> a = {1,2,3,4,5};
  vector<int> b = {6,3,5,1,2};
  int x = 10;

  //this is just a debug
  cout << "a = ";
  for (auto it = a.begin();it != a.end();it++) 
    cout << *it << " ";
  cout << endl << "b = ";
  for (auto it = b.begin();it != b.end();it++) 
    cout << *it << " ";
  cout << endl;

  //instruction count
  int count = 0;

  //we want to find i,j such that a[i] + b[j] = x
  cout << "Solution: " << endl;
  for (size_t i = 0;i < a.size();i++) {
    for (size_t j = 0;j < a.size();j++) {
      count++;
      if (a[i] + b[j] == x) {
        cout << "a[" << i << "] + b[" << j << "] = " << x << endl;
      }
    }
  }

  cout << "Count = " << count << endl;
}
