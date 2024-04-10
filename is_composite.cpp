#include<bits/stdc++.h>
using namespace std;
bool print_composite(int n)
{
    //Write your code here
   int d=2;
   bool isprime=true;
   bool iscomposite=false;
    for(d=2;d<n;d++)
    {
      if (n % d == 0) {
        isprime = false;
        iscomposite=true;
        break;
      }
    }
    return iscomposite;

}
int main()
{
    int n;
    cin>>n;
    cout<<print_composite(n);
}