#include<bits/stdc++.h>
using namespace std;
int f(int n)
{
    if(n<=1)
    return n;
    int last=f(n-1);
    int sec_last=f(n-2);
    return last+sec_last;
}
int main()
{
    int n;
    cin>>n;
    cout<<f(n);
}