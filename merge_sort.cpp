#include<bits/stdc++.h>
using namespace std;
//for merging
void merge(int arr[],int si,int ei)
{
    int mid=(si+ei)/2;
    int *temp=new int[ei-si+1];
    int i=si;
    int j=mid+1;
    int k=0;
    while(i<=mid &&j<=ei)
    {
        if(arr[i]<=arr[j])
        {
            temp[k]=arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k]=arr[j];
            j++;
            k++;
        }
    }
    while(i<=mid)
    {
        temp[k]=arr[i];
        i++;
        k++;
    }
    while(j<=ei)
    {
        temp[k]=arr[j];
        j++;
        k++;
    }
    //putting back elements in original array
    int m=0;
    while(m<k)
    {
        arr[si+m]=temp[m];
        m++;
    }
    delete[]temp;
}
void mergesort(int arr[],int si,int ei)
{
    if(si>=ei)
    return;
    int midindex=(si+ei)/2;
    mergesort(arr,si,midindex);
    mergesort(arr,midindex+1,ei);
    merge(arr,si,ei);
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    mergesort(arr, 0, arr_size - 1);

    for(int i = 0; i < arr_size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}