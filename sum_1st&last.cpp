#include<bits/stdc++.h>
using namespace std;
void correspondingPairSum(int arr[],int n,int output[])
{
    for(int i=0;i<n/2;i++)
    {
        cout<<arr[i]+arr[n-i-i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int output[n/2];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    correspondingPairSum(arr,n,output);
}    