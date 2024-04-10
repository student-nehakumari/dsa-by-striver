#include<bits/stdc++.h>
using namespace std;
void left_rotate(int arr[],int n,int d)
{
    d=d%n;
    int temp[d];
    //srting temp
    for(int i=0;i<d;i++)
    temp[i]=arr[i];
    //rotating by d places
    for(int i=d;i<n;i++)
    arr[i-d]=arr[i];
    //putting back temp
    for(int i=n-d;i<n;i++)
    arr[i]=temp[i-(n-d)];
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int d;
    cin>>d;
    left_rotate(arr,n,d);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}    