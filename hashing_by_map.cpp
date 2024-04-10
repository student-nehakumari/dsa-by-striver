#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    //precomputing

    map<int,int>mpp;
    for(int i=0;i<n;i++)
    mpp[arr[i]]++;

    //time complexity of map:-o(log n)
    //time complexity of unordered map:-o(n) at worst case when collisions happen otherwise o(1)
    //fetching
    int q;
    cin>>q;
    while(q--)
    {
        int num;
        cin>>num;
        cout<<mpp[num]<<endl;
    }

}