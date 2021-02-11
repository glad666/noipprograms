#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	int n,b;
	cin>>n;
	while(n--!=0)
	{
		cin>>a;
		cin>>b;
		b=b%a.size();
		a=a.substr(a.size()-b,b)+a.substr(0,a.size()-b);
		cout<<a<<endl;
	} 
	return 0;
}
