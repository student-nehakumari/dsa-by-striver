#include <iostream>

using namespace std;

int main() {
   int rows;

   cout << "Enter the number of rows: ";
   cin >> rows;

   for (int i = 1; i <= rows; ++i) {
       // Print leading spaces
       for (int j = 1; j <= rows - i; ++j) {
           cout << " ";
       }

       // Print numbers in ascending and descending order
       for (int j = i; j >= 1; --j) {
           cout << j;
       }
       for (int j = 2; j <= i; ++j) {
           cout << j;
       }

       cout << endl;
   }

   return 0;
}