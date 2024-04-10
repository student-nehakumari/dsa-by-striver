#include <iostream>
#include <string>

using namespace std;

string reverseStringWordWise(string input) {
   string reversedString ="";
   int start=0, end=0;

   // Iterate through the string, finding word boundaries
   while(end<input.size()) {
       while(end<input.size() && input[end]!=' '){
           end++;
       }

       // Extract the current word
       string word = input.substr(start, end - start);

       // Prepend the word to the reversedString
       reversedString = word + " " + reversedString;

       // Move to the beginning of the next word
       end++;
       start = end;
   }
   return reversedString;
}
int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}