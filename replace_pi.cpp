#include <bits/stdc++.h>
using namespace std;
void replacePi(char input[]) {
	// Write your code here
    if (input[0] == '\0' || input[1]=='\0') {
        return;
    }

    if (input[0] != 'p' || input[1] != 'i')
    {
        replacePi(input+1);
    } 
    else {
        int lastIndex=0;
        while(input[lastIndex]!='\0')
        {
            lastIndex++;
        }
        while(lastIndex>=2)
        {
            input[lastIndex+2]=input[lastIndex];
            lastIndex--;
        }
        // Replace "pi" with "3.14"
        input[0] = '3';
        input[1] = '.';
        input[2] = '1';
        input[3] = '4';
        // Recursive call for the remaining string
        replacePi(input + 4);
    }
}
int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}
