#include<bits/stdc++.h>
using namespace std;
int length(char input[])
{
    int cnt=0;
    for(int i=0;input[i]!='\0';i++)
    cnt++;
    return cnt;
}
void reversestring(char arr[])
{
    int n=length(arr);
    int i=0,j=n-1;
    while(i<j)
    {
        char temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}
int main()
{
    char arr[100];
    cin.getline(arr,100);
    reversestring(arr);
    cout<<arr;
}    