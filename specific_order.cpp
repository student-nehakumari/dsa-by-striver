#include <iostream>
using namespace std;
void fillArray(int arr[],int n)
{
   int start=0,end=n-1,value=1;
   while(start<=end)
   {
    arr[start]=value;
    start+=1;
   
   if(start<=end)
   {
    arr[end]=value+1;
    end-=1;
    value+=2;
   }
   }
}
int main() {
   int N;
   cout << "Enter the size of the array: ";
   cin >> N;

   int arr[N];
   fillArray(arr, N);

   cout << "The filled array is: ";
   for (int i = 0; i < N; i++) {
       cout << arr[i] << " ";
   }
   cout << endl;

   return 0;
}
