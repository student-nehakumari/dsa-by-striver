#include<bits/stdc++.h> 
using namespace std;
int firstOccurance(int input[], int size, int x) {
  
  if(size==0)
    return -1;
  if(input[0]==x)
    return 0;
  int smallArrayIndex=firstOccurance(input+1,size-1,x);
  if(smallArrayIndex==-1)
  return -1;
  else
  return smallArrayIndex+1;
}

int main(){
    int n;
    cin >> n;
    int *input = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    int x;
    cin >> x;
    cout<<firstOccurance(input,n,x)<<endl;
}