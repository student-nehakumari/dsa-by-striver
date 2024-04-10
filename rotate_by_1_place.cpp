#include<bits/stdc++.h>
using namespace std;
int rotate_1_place(int n,int arr[])
{
    int temp=arr[0];
    for(int i=1;i<n;i++)
    arr[i-1]=arr[i];
    arr[n-1]=temp;
    return arr[];
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
    cout<<rotate_1_place(n,arr);
}    