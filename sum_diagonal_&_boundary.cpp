#include <iostream>
using namespace std;
int totalSum(int input[][501], int n)
{
int total_sum = 0;
 for (int i = 0; i < n; i++) {
   total_sum += input[i][i];
   total_sum += input[i][n - 1 - i];
 }
 for (int i = 0; i < n; i++) {
   total_sum += input[0][i]; 
   total_sum += input[n - 1][i];  
   total_sum += input[i][0];    
   total_sum += input[i][n - 1];  
 }
 total_sum = total_sum-(input[0][0] + input[0][n - 1] + input[n - 1][0] + input[n - 1][n - 1]);
 return total_sum;
}
int main()
{
	
		int n;
		cin >> n;
		int arr[501][501];

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> arr[i][j];
			}
		}
        
        cout << totalSum(arr, n) << endl; 
	
}