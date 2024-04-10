#include <bits/stdc++.h>
using namespace std;
int totalSum(vector<vector<int>> arr, int n) {
    if(n==0)
    return 0;
    
    int diagonal_sum=0,s1=0,s2=0;
    for (int i=0;i<n;i++) {
        s1+=arr[i][i];
    }    
    for (int i=0;i<n;i++) {
        s2+=arr[i][n-1-i];
    }
    diagonal_sum=s1+s2;
    if(n%2==1){
        diagonal_sum-=arr[n/2][n/2];
    }
    int boundary_sum=0,row_sum=0,col_sum=0;

    // Sum up top and bottom rows
    for (int i=1;i<n-1;i++) {
        row_sum+=arr[0][i];
        row_sum+=arr[n-1][i];
    }

    // Sum up left and right columns excluding corner elements
    for (int i=1;i<n-1;i++) {
        col_sum+=arr[i][0];
        col_sum+=arr[i][n-1];
    }
    boundary_sum=row_sum+col_sum;
    int total_sum =diagonal_sum+boundary_sum;
    return total_sum;
}
//method 2:-
int totalSum_met2(vector<vector<int>> arr, int n) {
    if(n==0)
    return 0;
    
    int diagonal_sum = 0, s1 = 0, s2 = 0;
    for (int i = 0; i < n; i++) {
        s1 += arr[i][i];
        s2 += arr[i][n - 1 - i];
    }
    diagonal_sum = s1 + s2;
    if (n % 2 == 1) {
        diagonal_sum -= arr[n / 2][n / 2];
    }
    int boundary_sum = 0, row_sum = 0, col_sum = 0;

    // Sum up top and bottom rows
    for (int i = 0; i < n; i++) {
        boundary_sum += arr[0][i];
        boundary_sum += arr[n - 1][i];
    }

    // Sum up left and right columns excluding corner elements
    for (int i = 1; i < n - 1; i++) {
        boundary_sum += arr[i][0];
        boundary_sum += arr[i][n - 1];
    }

    // Exclude corner elements from boundary sum
    boundary_sum = boundary_sum - arr[0][0] - arr[0][n - 1] - arr[n-1][0] - arr[n-1][n-1];
    // boundary_sum -= arr[0][0];
    // boundary_sum -= arr[0][n - 1];
    // boundary_sum -= arr[n - 1][0];
    // boundary_sum -= arr[n - 1][n - 1];

    int total_sum = diagonal_sum + boundary_sum;
    return total_sum;
}
int main()
{
	
		int n;
		cin>>n;
		vector<vector<int>>arr(n,vector<int>(n));

		for (int i=0;i<n;i++)
		{
			for (int j=0;j<n;j++)
			{
				cin>>arr[i][j];
			}
		}
        
        cout<<totalSum(arr,n)<<endl; 
	    cout<<totalSum_met2(arr,n)<<endl; 
}