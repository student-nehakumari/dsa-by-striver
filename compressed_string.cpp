#include <bits/stdc++.h>

using namespace std;

string getCompressedString(string &input) {
string compressedString;
   char currentChar = input[0];
   int currentCount = 1;

   for (int i = 1; i < input.length(); i++) {
       if (input[i] == currentChar) {
           currentCount++;
       } else {
           // Only append count if it's greater than 1
           if (currentCount > 1) {
               compressedString += currentChar + to_string(currentCount);
           } else {
               compressedString += currentChar;
           }
           currentChar = input[i];
           currentCount = 1;
       }
   }

   // Handle the last character similarly
   if (currentCount > 1) {
       compressedString += currentChar + to_string(currentCount);
   } else {
       compressedString += currentChar;
   }

   return compressedString;
}
int main() {
    int size = 1e6;
    string str;
    cin >> str;
    str = getCompressedString(str);
    cout << str << endl;
}