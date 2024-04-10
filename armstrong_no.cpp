#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int cnt=0;
    int x=n;
    int a=n;
    while (a!= 0) {
       a/= 10;
       cnt++;
   }
    while(n>0)
    {
        int lastdig=n%10;
        sum=sum+pow(lastdig,cnt);
        n=n/10;
    }
    if(sum==x)
    cout<<"true";
    else
    cout<<"false";
}    

    