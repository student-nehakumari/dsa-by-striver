#include<bits/stdc++.h> 
using namespace std;
int binary_search_helper(int input[],int start_index,int end_index,int target)
{
    if(start_index>end_index)
    return -1;
    int mid=(start_index+end_index)/2;
    if(target==input[mid])
    return mid;
    else if(target<input[mid])
    return binary_search_helper(input,start_index,mid-1,target);
    else
    return binary_search_helper(input,mid+1,end_index,target);
}
int binarySearch(int input[], int size, int element)
{
    binary_search_helper(input,0,size-1,element);
}
int main() {
    int input[100000],length,element, ans;
    cin >> length;
    for(int i =0;i<length;i++)
    { 
        cin >> input[i];;
    }

    cin>>element;
    ans = binarySearch(input, length, element);
    cout<< ans << endl;
}