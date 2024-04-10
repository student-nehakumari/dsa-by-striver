//Peak element is defined as that element that is greater than both of its neighbors.
// If 'arr[i]' is the peak element, 'arr[i - 1]' < 'arr[i]' and 'arr[i + 1]' < 'arr[i]'.

#include<bits/stdc++.h> 
using namespace std;
int findPeakElement(vector<int>&arr) {

    // Write your code here
    int n=arr.size();
    if(n==1)
    return  0;
    if(arr[0]>arr[1])
    return 0;
    if(arr[n-1]>arr[n-2])
    return n-1;
    for(int i=1;i<n-1;i++)
    {
        if(arr[i]>arr[i-1] &&arr[i]>arr[i+1])
        return i;
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int index=findPeakElement(arr);
    cout<<index<<endl;
}   
