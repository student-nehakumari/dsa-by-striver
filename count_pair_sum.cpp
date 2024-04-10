#include <bits/stdc++.h>
using namespace std;
int pairSum(int A[], int size, int K)
{
     // Write your code here.
     int i=0;
     int j=size-1;
     int pairSumCount=0;
     while(i<j)
     {
          if(A[i]+A[j]==K)
          {
               pairSumCount++;
               i++;
               j--;
          }
          else if(A[i]+A[j]<K)
          {
               i++;
          }
          else
          {
               j--;
          }

     }
     return pairSumCount;
}
int main()
{
    int n;
    cin>>n;
    int input[n];
    for(int i=0;i<n;i++)
    {
        cin>>input[i];
    }
    int k;
    cin>>k;
    int ans = pairSum(input, n, k);
    cout<<ans;
    return 0;
}