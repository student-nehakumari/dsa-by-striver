#include <bits/stdc++.h>

using namespace std;

void transpose(int row, int col, int input[][1001]) {
   int new_mat[col][row];
   for(int i=0;i<row;i++)
   {
       for( int j=0;j<col;j++)
       {
           new_mat[j][i]=input[i][j];
       }
   }
   for( int i=0;i<col;i++)
   {
       for(int j=0;j<row;j++)
       cout<<new_mat[i][j]<<" ";
       cout<<endl;
   }
}
int main(){
    int row,col;
    cin>>row>>col;
    int input[row][1001];

    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            
            cin>>input[i][j];
        }
    }
    transpose(row,col,input);
}