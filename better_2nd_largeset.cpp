//t.c=o(2n)
#include<bits/stdc++.h>
using namespace std;
int second_largest_element(int n,int arr[])
{
    //for largest
    int largest=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        largest=arr[i];
    }
    //for 2nd largest
    int sec_largest=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>sec_largest && arr[i]!=largest)
        sec_largest=arr[i];
    }
    return sec_largest;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<second_largest_element(n,arr);
    
}    