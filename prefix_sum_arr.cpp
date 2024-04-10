#include<iostream>
using namespace std;
void prefixSum(int arr[],int n,int output[]){
    //Write your code here
    for(int i=0;i<n;i++)
    output[i]=output[i-1]+arr[i];
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    int output[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    prefixSum(arr,n,output);
    for(int i = 0;i<n;i++){
        cout<<output[i]<<" ";
    }
}