#include <iostream>
using namespace std;
int findEquilibriumIndex(int *arr, int n)
{
    //Write your code here
    int left_sum = 0;
    int right_sum = 0;
    for (int i = 0; i < n; i++) {
      right_sum += arr[i];
    }
    for (int i = 0; i < n; i++) {
      int current = arr[i];
      right_sum -= current;
      if (left_sum == right_sum) {
        return i;
      }
      left_sum += current;
    }
    return -1;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findEquilibriumIndex(input, size) << endl;

		delete[] input;
	}
	return 0;
}