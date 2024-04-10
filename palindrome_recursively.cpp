#include<bits/stdc++.h> 
using namespace std;
bool is_palindrome(int input[], int size) {
  if(size==0 ||size==1)
    return true;
  if(input[0]!=input[size-1])
    return false;
  //if true check for smaller function
  bool is_smaller_palindrome=is_palindrome(input+1,size-2);
  return is_smaller_palindrome;
}

int main(){
    int n;
    cin >> n;
    int *input = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    cout<<is_palindrome(input,n)<<endl;
}