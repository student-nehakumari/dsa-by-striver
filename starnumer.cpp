#include <iostream>

using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = rows; i >= 1; --i) {
        // Print ascending numbers from 1 to i-1 (excluding the middle number in the first row)
        for (int j = 1; j <= i; ++j) {
            cout << j;
        }

        // Print stars (2 * (rows - i))
        for (int j = 0; j < 2 * (rows - i); ++j) {
        cout << "*";
}
        // Print descending numbers from i-1 to 1 (excluding the middle number in the first row)
        for (int j = i; j >= 1; --j) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}