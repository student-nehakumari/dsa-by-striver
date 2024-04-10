#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=1;
    while(i<=n/2+1)
    {
        int spaces=n/2+1-i;
        while(spaces>0)
        {
            cout<<" ";
            spaces--;
        }
        int stars=2*i-1;
        while(stars>0)
        {
            cout<<"*";
            stars--;
        }
        cout<<endl;
        i++;
    }
    i=n/2;
    while(i>=1)
    {
        int spaces=n/2+1-i;
        while(spaces>0)
        {
            cout<<" ";
            spaces--;
        }
         int stars=2*i-1;
        while(stars>0)
        {
            cout<<"*";
            stars--;
        }
        cout<<endl;
        i--;
    }
    
}