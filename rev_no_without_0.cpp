#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n,rev_no=0;
	cin>>n;
    bool trailingzeros=false;
	while(n>0)
	{
		int digit=n%10;
		if(digit!=0)
        trailingzeros=true;
        if(trailingzeros)
		rev_no=(rev_no*10)+digit;
		n=n/10;
	}
	cout<<rev_no;
}