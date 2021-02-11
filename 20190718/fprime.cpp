#include<bits/stdc++.h>
using namespace std;
int prime[5002],n,m=0;
bool fprime[10002];

void pri(int a)
{
	memset(fprime,true,sizeof(fprime));
	fprime[1]=false;
	for(int i=1;i<=n;i++)
	{
		if(fprime[i]==false)	continue;
		prime[++m]=i;
		for(int j=i;j<=n/i;j++)
			fprime[i*j]=false;
	}
}

int main()
{
	cin>>n;
	pri(n);
	for(int i=1;i<=m;i++)
		cout<<prime[i]<<" ";
	return 0;
}
