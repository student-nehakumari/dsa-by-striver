#include <bits/stdc++.h>
using namespace std;
void moveZeros(int* arr, int n) {
  int j= 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] != 0) {
      // If element is non-zero, copy it to the write index
      arr[j] = arr[i];
      j++;
    }
  }

  // Fill the remaining elements with zeros
  while (j < n) {
    arr[j] = 0;
    j++;
  }
}

int main() {
  int t;
  cin>>t;
  int n;
  int* arr=new int[n];
  while(t-->0)
  {
  cin>>n;
  for (int i = 0; i < n; i++) {
    cin>>arr[i];
  }
  moveZeros(arr,n);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  delete[] arr;
  }
  return 0;
}