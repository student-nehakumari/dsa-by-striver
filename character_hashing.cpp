#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    //precomputing

    int hash[256]={0};
    for(int i=0;i<s.size();i++)
    hash[s[i]]+=1;
    //fetching

    int q;
    cin>>q;
    while(q--)
    {
        char ch;
        cin>>ch;
        cout<<hash[ch]<<endl;
    }

}