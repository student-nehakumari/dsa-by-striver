#include<bits/stdc++.h> 
using namespace std;
int countZeros(int n) {
    // Write your code here
    int l=n;
    if(n==0)
      return 1;
    else if(n<10 && n!=0)
      return 0;
    if (l % 10 == 0) {
      return countZeros(l / 10) + 1; // Add 1 only if it's a zero
    } 
    else {
      return countZeros(l / 10);
    }
}
int main()
 {
    int n;
    cin >> n;
    cout <<countZeros(n)<<endl;
}
