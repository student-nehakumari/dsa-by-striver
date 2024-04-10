#include<bits/stdc++.h> 
using namespace std;
void print_1_to_n(int n)
{
    if(n<1)
    return;
    print_1_to_n(n-1);
    cout<<n<<" ";
}
void print_n_to_1(int n)
{
    if(n<1)
    return;
    cout<<n<<" ";
    print_n_to_1(n-1);
}
int main()
{
    int n;
    cin>>n;
    print_1_to_n(n);
    cout<<endl;
    print_n_to_1(n);
}    