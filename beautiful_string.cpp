#include <iostream>
#include <string>
#include <algorithm> // for std::min

using namespace std;

int makeBeautiful(string str) {
    int len=str.size();
    int ans = 0;
    for (int i = 0; i < len; i++) {
 
        // If there is 1 at even index positions
        if (i % 2 == 0 && str[i] == '1')
            ans++;
 
        // If there is 0 at odd index positions
        if (i % 2 == 1 && str[i] == '0')
            ans++;
    }
    return min(ans, len - ans);
}

int main() {
    string str;
    cin >> str;

    int operations = makeBeautiful(str);
    cout << operations << endl;

    return 0;
}