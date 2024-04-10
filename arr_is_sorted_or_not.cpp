#include<bits/stdc++.h>
using namespace std;
//t.c=o(n)
int is_sorted(int n,int arr[])
{
    for(int i=1;i<n;i++)
    {
    if(arr[i]>arr[i-1])
    {

    }
    else
    return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<is_sorted(n,arr);
    
}    