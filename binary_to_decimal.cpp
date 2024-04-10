#include<bits/stdc++.h>
using namespace std;
int main() {
    int binaryNum;
    cin >> binaryNum;
    int decimal = 0, multiplier = 1;

    while (binaryNum > 0) {
        int lastDigit = binaryNum % 10;
        // Calculate decimal equivalent using repeated multiplication by 2
        decimal += lastDigit * multiplier;
        multiplier *= 2;

        binaryNum /= 10;
    }

    
        cout<<decimal << endl;

    return 0;
}