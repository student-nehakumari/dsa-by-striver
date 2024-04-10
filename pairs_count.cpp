//counting the no. of pairs whose 1st value > 2nd value
 
#include <bits/stdc++.h>
using namespace std;
int countPairs(vector<pair<int,int>> a){
    int count=0;
    for(const auto &pair : a)
    {
        if(pair.first>pair.second)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    
    int n;
    cin>>n;
    
    vector<pair<int,int>> a(n);
    for(int i = 0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    cout<<countPairs(a);
    return 0;
}

