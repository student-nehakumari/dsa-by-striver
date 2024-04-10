#include <bits/stdc++.h>
using namespace std;
void minLengthWord(char input[], char output[]) {
   int len = strlen(input);
   int s= 0, e= 0;
   int min_length = len, min_start_index = 0;

   while (e<= len) {
       if (e< len && input[e] != ' ') {
           // Keep extending the word
           e++;
       } else {
           // Word boundary reached
           int curr_length = e- s;
           if (curr_length < min_length) {
               min_length = curr_length;
               min_start_index = s;
           }
           s= e + 1;  // Move to the start of the next word
           e++;        // Advance the end index
       }
   }

   // Copy the minimum length word to the output array
   strncpy(output, input + min_start_index, min_length);
   output[min_length] = '\0';  // Add null terminator
}

int main() {
   char input[] = "thisu test string";
   char output[100];
   minLengthWord(input, output);
   cout<<output;
   return 0;
}