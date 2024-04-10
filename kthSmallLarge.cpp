#include<bits/stdc++.h>
using namespace std;
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	// Write your code here.
	vector<int >output;
	sort(arr.begin(),arr.end());
	output.push_back(arr[k-1]);
	output.push_back(arr[n-k]);

	return output;
}
int main()
{
        int t;
        cin >> t;
        for (int i = 0; i < t; i++)
        {
            int n, k;
            cin >> n >> k;

            vector<int> arr(n);
            for(int i = 0; i < n; i++) 
            {
                cin >> arr[i];
            }
            vector<int> result = kthSmallLarge(arr,n,k);
            for(int i=0;i<2;i++)
            {
                cout<<result[i]<<" ";
            }
        }
}