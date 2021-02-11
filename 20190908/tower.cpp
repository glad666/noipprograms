#include<bits/stdc++.h>
using namespace std;

int n,t[10004],f[10004],g[10004];

int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&t[i]);
		
	for(int i=1;i<=n;i++)
	{
		g[i]=min(g[i-1],f[i-1])+t[i];
		if(i>1)
			f[i]=min(g[i-1],g[i-2]);
		else
			f[i]=0;
	}
	
	printf("%d\n",min(f[n],g[n]));
	return 0;
} 
