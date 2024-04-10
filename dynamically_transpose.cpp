#include <bits/stdc++.h>
using namespace std;
int main() 
{
  int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		cin>>m>>n;
		int **matrix=new int*[m];
		for(int i=0;i<m;i++)
		{
			matrix[i]=new int [n];
			for(int j=0;j<n;j++)
			{
				cin>>matrix[i][j];
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout<<matrix[j][i]<<" ";
			}
			cout<<endl;
		}
	}
}