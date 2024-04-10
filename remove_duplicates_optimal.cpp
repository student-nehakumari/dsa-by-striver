#include<bits/stdc++.h>
using namespace std;
int remove_duplicates(int n,int arr[])
{
    int i=0;
    for(int j=0;j<n;j++)
    {
        if(arr[i]!=j)
        {
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<remove_duplicates(n,arr);
}    