#include <iostream>

using namespace std;

int main() {
    long long decimal,placeValue = 1;
    long long binary = 0;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    while (decimal > 0) {
        int lastDigit = decimal % 2;
        binary = lastDigit * placeValue + binary;
        decimal /= 2;
        placeValue *= 10;
    }

    cout <<binary<<endl;

    return 0;
}