#include<bits/stdc++.h> 
using namespace std;
int multiply(int m, int n)
{
    if(n==0)
    return 0;
    //for +ve no.
    if(n>0)
     return m+multiply(m,n-1);
    else
     return -multiply(m,-n); 
}
int main()
 {
    int m,n;
    cin>>m>>n;
    cout <<multiply(m,n)<<endl;
}