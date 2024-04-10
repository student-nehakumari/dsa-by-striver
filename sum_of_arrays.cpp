#include<bits/stdc++.h>
using namespace std;
void sum(int arr1[],int arr2[],int n,int arr3[])
{
    for(int i=0;i<n;i++)
    arr3[i]=arr1[i]+arr2[i];
}
int main()
{
    int n;
    cin>>n;
    int arr1[n],arr2[n],arr3[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
        cin>>arr2[i];
    }
    sum(arr1,arr2,n,arr3);
    for(int i=0;i<n;i++)
    {
        cout<<arr3[i]<<" ";
    }
}    