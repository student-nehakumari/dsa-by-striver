#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int rev_no=0;
    while(n>0)
    {
        int last_dig=n%10;
        rev_no=(rev_no*10)+last_dig;
        n=n/10;
    }
    cout<<rev_no;
}