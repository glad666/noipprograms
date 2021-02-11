#include<bits/stdc++.h>
using namespace std;

int m,n,w[201],c[201],f[201][201];

int main()
{
	scanf("%d %d",&m,&n);
	
	for(int i=1;i<=n;i++)
		scanf("%d %d",&w[i],&c[i]);
		
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			if(j>=w[i])	f[i][j]=max(f[i][j-w[i]]+c[i],f[i-1][j]);
			else	f[i][j]=f[i-1][j];
	
	printf("%d\n",f[n][m]);
	return 0;
}
