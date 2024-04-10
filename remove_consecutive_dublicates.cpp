#include<bits/stdc++.h>
using namespace std;
void removeConsecutiveDuplicates(char input[]) {
    int j= 0;
    for (int i = 0; input[i] != '\0';i++) {
        if (input[i] != input[j]) {
            j++;
            input[j] = input[i];
        }
    }
    input[j+1] = '\0';
}
int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout << str;
}
