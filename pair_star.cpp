#include <bits/stdc++.h>
using namespace std;
void pairStar(char input[]) {
    // Write your code here
    int n=strlen(input);
    if(n==0 ||n==1)
    return;
    if(input[0]==input[1])
    {
        for(int i=n;i>=1;i--)
        {
            input[i+1]=input[i];
        }
        input[1]='*';
    }
    pairStar(input+1);

}
int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}
