#include<bits/stdc++.h>
using namespace std;
int linear_search(int n,int &arr,int num)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
        return i;
    }
    return -1;
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
    linear_search(n,arr[0],num);
}    