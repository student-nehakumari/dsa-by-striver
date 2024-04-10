#include <iostream>

using namespace std;

bool isFibonacci(int N) {
   if (N <0) {
       return false;  // Negative numbers are not Fibonacci numbers
   } else if (N <= 1) {
       return true;   // 0 and 1 are the first two Fibonacci numbers
   }

   // Iteratively generate Fibonacci numbers until a match is found or exceeded
   int fib1 = 0, fib2 = 1, nextFib;
   while (nextFib <= N) {
       nextFib = fib1 + fib2;
       if (nextFib == N) {
           return true;  // Found a match
       }
       fib1 = fib2;
       fib2 = nextFib;
   }

   return false;  // Exceeded N without finding a match
}

int main() {
   int N;
   cout << "Enter a number: ";
   cin >> N;
   cout << isFibonacci(N)<< endl;

   return 0;
}