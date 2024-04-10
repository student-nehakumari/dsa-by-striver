#include <bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	for(int i=0;i<n;i++)
	{
        for(int j=i+1;j<n;j++)
       {
		if(arr[j]==arr[i])
		{
			return arr[j];
		}
       }
	}
}

//optimal apporach using hash map

int findDuplicateUsingHash(vector<int> &arr, int n) {
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
        if (freq[arr[i]] > 1) {
            return arr[i];
        }
    }

    return -1; // No duplicate found
}
int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout <<findDuplicate(arr,n)<< endl;
    cout<<findDuplicateUsingHash(arr,n);
    return 0;
}