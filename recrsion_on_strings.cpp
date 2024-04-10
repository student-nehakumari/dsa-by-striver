#include <iostream>
using namespace std;

//code for removing x from a given string
void removeX(char input[]) {
	if (input[0] == '\0') {
		return;
	}

	if (input[0] != 'x') {
		removeX(input + 1);
	} else {
		int i = 1;
		for (; input[i] != '\0'; i++) {
			input[i - 1] = input[i];
		}
		input[i - 1] = input[i];
		removeX(input);
	}
}

//code for finding the length of a function
int length(char s[]) {
	if (s[0] == '\0') {
		return 0;
	}
	int smallStringLength = length(s + 1);
	return 1 + smallStringLength;
}

int main() {
	char str[100];
	cin >> str;

	int l = length(str);
	cout << l << endl;
	removeX(str);
	cout << str << endl;
	l = length(str);
	cout << l << endl;
}
