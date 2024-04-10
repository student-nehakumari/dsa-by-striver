#include <bits/stdc++.h> 
using namespace std;
vector<int>sqsorted(vector<int>&arr) {
    // Write your code here.
    int n=arr.size();
    vector<int>square(n);
    for(int i=0;i<arr.size();i++)
    {
        square[i]=arr[i]*arr[i];
    }
    sort(square.begin(),square.end());
    return square;
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    vector<int>sorted_squares=sqsorted(arr);
    for(int i=0;i<n;i++)
    cout<<sorted_squares[i]<<" ";
}   