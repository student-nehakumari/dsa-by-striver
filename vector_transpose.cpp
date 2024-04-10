#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> transpose(int m, int n, vector<vector<int>> &mat) {
  vector<vector<int>> transposed_matrix(n, vector<int>(m));

  // Iterate through the original matrix and populate the transpose
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      transposed_matrix[j][i] = mat[i][j];
    }
  }

  return transposed_matrix;
}
int main() 
{
  int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		cin>>m>>n;
		vector<vector<int>>matrix(m,vector<int>(n));

		for (int i=0;i<m;i++)
		{
			for (int j=0;j<n;j++)
			{
				cin>>matrix[i][j];
			}
		}
        
        vector<vector<int>> transposed_matrix = transpose(m, n, matrix);

        // Print the transpose matrix
        cout << "\nTranspose matrix:\n";
        for (int i = 0; i < n; i++)
        {
          for (int j = 0; j < m; j++)
          {
            cout << transposed_matrix[i][j] << " ";
          }
          cout << endl;
	    }
    }    
}