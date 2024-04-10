#include<bits/stdc++.h>
using namespace std;
char highestOccurringChar(char input[]) {
    // Write your code here
    if(input[0]=='\0')
    {
        return 0;
    }
    char result;
   int frequency[26] = {0};
   int maxCount =0;
   int start[26];
   for(int i=0;i<26;i++)
   {
       start[i]=-1;
   }
   for (int i = 0; input[i] != '\0'; i++)
   {
       if(start[input[i]-'a']==-1)
       {
           start[input[i]-'a']=i;
       }
   }
   for (int i = 0; input[i] != '\0'; i++) {
       frequency[input[i]-'a']++;
       if(frequency[input[i]-'a']>maxCount)
       {
           maxCount=frequency[input[i]-'a'];
           result=input[i];
       }
       else if(frequency[input[i]-'a']==maxCount)
       {
           if(start[input[i]-'a']<start[result-'a'])
           {
               result=input[i];
           }
       }
   }
   return result;
}
int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}