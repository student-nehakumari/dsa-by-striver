#include<bits/stdc++.h>
using namespace std;
/*void f(int i,int sum)
{
    if(i<1)
    {
        cout<<sum;
        return;
    }
    f(i-1,sum+i);
    
}
int main()
{
    int n;
    cin>>n;
    f(n,0);
}*/

//method2:-multiple recurion
int f(int n)
{
    if(n==0)
    return 0;
    return n+f(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<f(n);
}
