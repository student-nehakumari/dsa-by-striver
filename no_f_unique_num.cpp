#include<bits/stdc++.h>
using namespace std;
int no_of_unique_ele(int n,int arr[])
{
    set<int>st;
    for(int i=0;i<n;i++)
    st.insert(arr[i]);
    int index=0;
    for(auto it:st)
    {
        arr[index]=it;
        index++;
    }
    return index;//gives no. of unique elements
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<no_of_unique_ele(n,arr);
}    