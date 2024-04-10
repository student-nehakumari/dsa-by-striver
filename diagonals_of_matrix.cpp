#include<iostream>
using namespace std;
void squareMatrix(int n,int arr[][100],int output[]){
    //100 is just the upper limit, you just have to access till n
    for(int i=0;i<n;i++)
    {
        for(int  j=0;j<n;j++)
        {
            if(i==j)
            output[i]=arr[i][j];
        }
    }

}
int main(){
    int n;
    cin>>n;
    int arr[n][100];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int output[n];
    squareMatrix(n,arr,output);
    for(int i = 0;i<n;i++){
        cout<<output[i]<<" ";
    }

}