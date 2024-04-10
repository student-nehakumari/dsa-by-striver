#include<iostream>
using namespace std;
int kthSmallest(int arr[], int n, int k)
{
    //Write your code here
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
          if (arr[j] > arr[j + 1]) {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
          }
        }
    }
    return arr[k-1];
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int kth_smallest = kthSmallest(arr, n, k);
    cout << kth_smallest << endl;
    return 0;
}
