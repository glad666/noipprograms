#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	int s0,s=0,x,n;
	cin>>s0;
	getline(cin,a);
	getline(cin,a);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		cin>>a;
		cin>>x;
		s+=x;
	}
	if(s>s0) s=s+(s-s0);
	cout<<s<<endl;
	return 0;
}
