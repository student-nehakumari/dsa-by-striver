#include <iostream>
using namespace std;
void print2DArray(int input[][1000], int row, int col) {
	// Write your code here
    for (int i = 0; i < row; ++i) {
        // Print the current row (n - i) times, starting from the current row index
        for (int j = i; j < row; ++j) {  // Corrected loop initialization and condition
            for (int k = 0; k < col; ++k) {
                cout << input[i][k] << " ";
            }
            cout << endl;
        }
    }
}


int main() {
    int row, col;
    cin >> row >> col;

    int input[row][1000];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>input[i][j];
        }
    }
    print2DArray(input, row, col);
}