#include<bits/stdc++.h>
using namespace std;
int count(int n)
{
    int cnt=0;
    while(n>0)
    {
        
        cnt=cnt+1;
        n=n/10;
    }
    return cnt;
}

//method 2 in which time and space complexity is o(1)

int count2(int n)
{
    return log10(n)+1;
}
//by recursion
int count3(int n)
{
if (n == 0) {
    return 0; // Base case: 0 has 0 digits
  }
  return 1+count3(n/10);
}  
int main()
{
    int n;
    cin>>n;
    cout<<count(n);
    cout<<endl;
    cout<<count2(n);
    cout<<endl;
    cout<<count3(n);

}