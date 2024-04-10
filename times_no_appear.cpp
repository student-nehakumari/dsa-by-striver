#include<bits/stdc++.h>
using namespace std;
int f(int num,int n,int a[])
{
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==num)
        cnt=cnt+1;
    }
    return cnt;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int num;
    cin>>num;
    cout<<f(num,n,arr);
}