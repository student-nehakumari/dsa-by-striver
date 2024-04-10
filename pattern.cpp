#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int r=1;r<=n/2;r++)
    {
        for(int c=1;c<=n-r;c++)
        cout<<" ";
         for(int c=1;c<=2*r-1;c++)
        cout<<"*";
        cout<<endl;
    }
    for(int r=(n/2)+1;r>=1;r--)
    {
        for(int c=1;c<=n-r;c++)
        cout<<" ";
         for(int c=1;c<=2*r-1;c++)
        cout<<"*";
        cout<<endl;
    }
    
}

