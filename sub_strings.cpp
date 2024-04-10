#include <iostream>
#include <cstring>
using namespace std;
void printSubstrings(char input[]) {
    // Write your code here
    for(int i=0;input[i]!='\0';i++)
    {
        
        for(int j=i;input[j]!='\0';j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<input[k];
            }
        cout<<endl;
        }
    }
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    printSubstrings(str);
}