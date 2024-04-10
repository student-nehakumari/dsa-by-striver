//geometric_sum
//1+1/2+1/4+1/8.............1/2^k
#include<bits/stdc++.h> 
using namespace std;
int geomertic_sum(int k)
{
    if(k==0)
      return 1;
    return 1.0/pow(2.0,k)+geomertic_sum(k-1);
}
int main()
 {
    int n;
    cin >> n;
    cout << fixed << setprecision(5);
    cout <<geomertic_sum(n)<<endl;
}