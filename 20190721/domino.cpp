#include<bits/stdc++.h>
using namespace std;

long long n,s=1,a=1,b=1,c;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
	}
	cout<<a<<endl;
	return 0;
} 
