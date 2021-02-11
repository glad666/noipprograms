#include<bits/stdc++.h>
using namespace std;

long long f[10001];
int n;

int main()
{
	cin>>n;
	f[1]=1;
	f[2]=2;
	for(int i=3;i<=n;i++)
		f[i]=f[i-1]+f[i-2];
	cout<<f[n]<<endl;
	return 0;
}
