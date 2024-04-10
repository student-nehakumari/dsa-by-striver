#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int n;
    char ch;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        ch='A'+j-1;
		cout<<ch;
        j++;
    }
    cout<<endl;
    i++;
}