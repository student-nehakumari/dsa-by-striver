#include<bits/stdc++.h>
using namespace std;
int factorial(int a)
{
    int factor=1;
    for(int i=1;i<=a;i++)
    factor=factor*i;
    return factor;
}
int permutation(int n, int r) {
    //Write your code here
    if(n<r||n<0||r<0)
    return-1;
    int fact_n=factorial(n);
    int fact_n_r=factorial(n-r);
    int permutation=fact_n/(fact_n_r);
    return permutation;
}

int main()
{
    int n,r;
    cin>>n>>r;
    cout<<permutation(n,r);
}