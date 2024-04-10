#include<iostream>
using namespace std;
long long int floorSqrt(long long int n)
{
    // Write your code here.
    if(n==0 ||n==1)
	  return n;
	long long int start = 1, end = n;

    while (start <end) {
    long long int mid = (start+end) / 2;
    if (mid <= (n / mid)) {
      start = mid + 1;
    } else
      end = mid;
   }
   return start-1;
} 
int main() {
	// Write your code here
	long long int n;
    cin>>n;
    long long int squareroot=floorSqrt(n);
    cout<<squareroot;
}