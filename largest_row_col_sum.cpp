#include <iostream>
using namespace std;
#include<climits>
int findLargest(int input[][1001], int n, int m)
{
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int rowsum=0;
        for(int j=0;j<m;j++)
        {
            rowsum+=input[i][j];
            
        }
        maxsum=max(maxsum,rowsum);
    }
    for(int j=0;j<m;j++)
    {
        int colsum=0;
        for(int i=0;i<n;i++)
        {
            colsum+=input[i][j];
        }
        maxsum=max(maxsum,colsum);
    }
    return maxsum;
}

int main()
{
	
		int row, col;
		cin >> row >> col;
		int input[row][1001];
		for (int i = 0; i < row; i++)
		{
			
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}

		
		cout << findLargest(input, row, col)<<endl;
	
}