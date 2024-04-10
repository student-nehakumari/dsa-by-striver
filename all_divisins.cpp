#include<bits/stdc++.h>
using namespace std;
void printdivisions(int n)
{
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        cout<<i<<" ";
        if(i*i!=n)
        cout<<n/i<<" ";
    }
}


//method 2:
void printdivisions2(int n)
{
    vector<int>ls;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            ls.push_back(i);
            if((n/i)!=i)
            ls.push_back(n/i);
        }
    }
    sort(ls.begin(),ls.end());
    for(auto it:ls)
    cout<<it<<" ";
}

int main()
{
    int n;
    cin>>n;
    printdivisions(n);            //T.C=O(N)
    printdivisions2(n);           //T.C=O(LOG N)+O(N)
}