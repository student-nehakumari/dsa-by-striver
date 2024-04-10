#include<bits/stdc++.h>
using namespace std;
string addBinaryString(string &a, string &b, int n, int m)
{
    // Write your code here.
 string result="";
 int carry=0;
 if(n<m)
 swap(a,b);
 int i=a.size()-1,j=b.size()-1;
 while(i>=0)
 {
   int sum=(i>=0?a[i]-'0':0)+(j>=0?b[j]-'0':0)+carry;
   result.insert(result.begin(),sum%2+'0');
   carry=sum/2;
   i--;
   j--;
 }
 if(carry>0)
 result.insert(result.begin(),carry+'0');
 return result;
}
//                        
class Runner
{
    int t;
    vector<pair<string, string>> binaryString;
    vector<pair<int, int>> stringLength;

public:
    void takeInput()
    {
        cin >> t;

        binaryString.resize(t);
        stringLength.resize(t);

        for (int l = 0; l < t; l++)
        {
            cin >> stringLength[l].first >> stringLength[l].second;

            cin >> binaryString[l].first >> binaryString[l].second;
        }
    }

    void execute()
    {
        for (int i = 0; i < t; i++)
        {
            string a = binaryString[i].first;
            string b = binaryString[i].second;
            int n = stringLength[i].first;
            int m = stringLength[i].second;

            addBinaryString(a, b, n, m);
        }
    }

    void executeAndPrintOutput()
    {
        for (int i = 0; i < t; i++)
        {
            string a = binaryString[i].first;
            string b = binaryString[i].second;
            int n = stringLength[i].first;
            int m = stringLength[i].second;

            cout << addBinaryString(a, b, n, m) << endl;
        }
    }
};

int main()
{
    Runner runner;
    runner.takeInput();
    runner.executeAndPrintOutput();

    return 0;
}