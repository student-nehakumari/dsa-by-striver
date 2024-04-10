#include<bits/stdc++.h>
using namespace std;
void gcd(int a,int b)
{
    while(a>0&&b>0)
    {
        if(a>b)
        a=a%b;
        else
        b=b%a;
    }
    if(a==0)
    cout<<b;
    else
    cout<<a;
}
//time complexity=o(log0min(a,b)).......
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    gcd(n1,n2);
}    