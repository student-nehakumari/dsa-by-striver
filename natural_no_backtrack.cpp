//method2:backtrack method by doing-1
#include<bits/stdc++.h>
using namespace std;
void f2(int i,int n)
{
    if(i<1)
    return;
    f2(i-1,n);
    cout<<i;
}
int main()
{
    int n;
    cin>>n;
    f2(n,n);
}
