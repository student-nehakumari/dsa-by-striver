#include <iostream>
#include <cstring>
using namespace std;
int length(char arr[])
{
    int cnt=0;
    for(int i=0;arr[i]!='\0';i++)
    cnt++;
    return cnt;
}
bool checkPalindrome(char str[])
{
    int l=length(str);
    for(int i=0;i<l/2;i++)
    {
        if(str[i]!=str[l-1-i])
        return false;
    }
    return true; 
}


int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}