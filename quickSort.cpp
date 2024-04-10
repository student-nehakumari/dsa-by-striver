#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int si,int ei)
{
    int count_smaller=0;
    for(int i=si+1;i<=ei;i++)
    {
        if(arr[i]<=arr[si])
        count_smaller++;
    }
    //moving pivot or partition element to original place
    int temp=arr[si+count_smaller];
    arr[si+count_smaller]=arr[si];
    arr[si]=temp;
    int partitionIndex=si+count_smaller;
    int partition_element=arr[partitionIndex];
    //putting all elements smaller than partitionelement 0n left n larger on right
    int i=si;
    int j=ei;
    while(i<partitionIndex && j>partitionIndex)
    {
        if(arr[i]<=partition_element)
        i++;
        else if(arr[j]>partition_element)
        j--;
        else
        //swap
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    return partitionIndex;

}
void quicksort(int arr[],int si,int ei)
{
    if(si>=ei)
    return;
    int partition_index=partition(arr,si,ei);
    quicksort(arr,si,partition_index-1);
    quicksort(arr,partition_index+1,ei);


}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    quicksort(arr, 0, arr_size - 1);

    for(int i = 0; i < arr_size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
int partitionArray(int input[], int start, int end) {
	// Write your code here
	int pivot = input[end];
  int i = start - 1;

  for (int j = start; j < end; j++) {
    if (input[j] <= pivot) {
      i++;
      std::swap(input[i], input[j]);
    }
  }

  std::swap(input[i + 1], input[end]);
  return i + 1;
}
void quickSort(int input[], int start, int end) {
	if (start <= end) {
    int p = partitionArray(input, start, end);
    quickSort(input, start, p - 1);
    quickSort(input, p + 1, end);
  }
}