#include<bits/stdc++.h>
using namespace std;
void selection_sort(int n,int arr[])
{
    for(int i=0;i<=n-2;i++)
    {
        int mini=i;
        for(int j=i;j<=n-1;j++)
        {
            if(arr[j]<arr[mini])
            mini=j;
        }
        swap(i,mini);
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    selection_sort(n,arr);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}