#include<bits/stdc++.h>
using namespace std;

void Klargest(int arr[],int output[],int n,int k){
    int j=0;
    sort(arr,arr+n);
    for(int i=n-k;i<=n-1;i++)
    {
        output[j++]=arr[i];
    }
    cout<<endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        int brr[k];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Klargest(arr, brr, n,k);
         for(int i = 0;i<k;i++){
            cout<<brr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
