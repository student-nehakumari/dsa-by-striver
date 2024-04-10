#include <iostream>
#include <cstring>
using namespace std;
    bool isPermutation(char input1[], char input2[]) {
    // Write your code here
    if(strlen(input1)!=strlen(input2)){
        return false;
    }
    int n=strlen(input1),m=strlen(input2);
    int arr1[256]={0},arr2[256]={0};
    for(int i=0; i<n; i++){
        arr1[input1[i]]++;
        arr2[input2[i]]--;  // <-- Corrected line: use arr2 instead of arr1
    }

    for(int i=0; i<256; i++){
        if(arr1[i]!=0){
            return false;
        }
    }
    return true;
}

int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}