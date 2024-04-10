#include <iostream>
using namespace std;
void wavePrint(int input[][1001], int nRows, int mCols)
{
    for(int j=0;j<mCols;j++)
    {
        if(j%2==0){
            for(int i=0;i<nRows;i++)
            cout<<input[i][j]<<" ";
        }
            else{
            for(int i=nRows-1;i>=0;i--)
            cout<<input[i][j]<<" ";
        }
    }
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
		wavePrint(input, row, col);
		cout << endl;
	
}