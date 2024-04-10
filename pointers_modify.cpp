#include <bits/stdc++.h>
using namespace std;
void modify(int *ar,int n)
{
	//write your code here
	if (n <= 0) {
        return;
    }
    int min_value = ar[0], max_value = ar[0];
    int *min_ptr = ar, *max_ptr = ar;
    for (int i = 1; i < n; i++) {
        if (ar[i] < min_value) {
            min_value = ar[i];
            min_ptr = &ar[i];
        }
        if (ar[i] > max_value) {
            max_value = ar[i];
            max_ptr = &ar[i];
        }
    }
    *min_ptr = 0;
    *max_ptr = 100;
}
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    modify(ar,n);
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}