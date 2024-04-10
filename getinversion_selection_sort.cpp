#include<iostream>
using namespace std;
int getinversion(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n-1;i++)
    {
        //finding min element
        int min=arr[i],minindex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                minindex=j;
            }
        }
        //swap
        int temp=arr[i];
        arr[i]=arr[minindex];
        arr[minindex]=temp;
        sum=sum+(minindex-i);
    }
    return sum;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
	    cin>>arr[i];
    }
    int ans=getinversion(arr, n);
    cout<<ans<<endl;
    return 0;
}
