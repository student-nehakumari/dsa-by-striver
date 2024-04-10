#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
	cin>>t;
	int n;
	for(int i=0;i<t;i++)
 {  
	cin>>n;
	while(n!=6)
	{
	switch(n)
	{
		case 1:
		int a,b;
		cin>>a>>b;
		cout<<a+b<<endl;
		break;
		case 2:
		int c,d;
		cin>>c>>d;
		cout<<c-d<<endl;
		break;
		case 3:
		int e,f;
		cin>>e>>f;
		cout<<e*f<<endl;
		break;
		case 4:
		int g,h;
		cin>>g>>h;
		cout<<g/h<<endl;
		break;
		case 5:
		int i,j;
		cin>>i>>j;
		cout<<i%j<<endl;
		break;
		case 6:
		exit(0);
		break;
		default:
		cout<<"Invalid Operation"<<endl;
	}
 }
}
}
