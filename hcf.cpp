#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int hcf=1;
    for(int i=1;i<=min(n1,n2);i++)
    {
        if(n1%i==0&&n2%i==0)
        hcf=i;
    }
    cout<<hcf;
}    