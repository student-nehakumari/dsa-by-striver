#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
    cin>>n;
	if(n==0 ||n==1)
	cout<<n;
	else
	{
    for(int i=1;i<n;i++)
    {
      if (i * i > n) {
        cout << i - 1;
        break;
      }
    }
  }
}