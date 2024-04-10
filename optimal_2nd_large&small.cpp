#include<bits/stdc++.h>
using namespace std;
//t.c=o(n)
//for 2nd largest
int sec_largest_element(int n,int arr[])
{
    int largest=arr[0];
    int sec_largest=INT_MIN;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            sec_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>sec_largest)
        sec_largest=arr[i];
    }
    return sec_largest;
}
//for 2nd smallestest
int sec_smallest_element(int n,int arr[])
{
    int smallest=arr[0];
    int sec_smallest=INT_MAX;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<smallest)
        {
            sec_smallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]!=smallest && arr[i]<sec_smallest)
        sec_smallest=arr[i];
    }
    return sec_smallest;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<sec_largest_element(n,arr)<<endl;
    cout<<sec_smallest_element(n,arr);
}    