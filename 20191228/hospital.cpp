#include<bits/stdc++.h>
using namespace std;

int n,L,R,a[109][109],Min=1E+7,h[109];

int main()
{
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			a[i][j]=1E+5;
	
	for(int i=1;i<=n;i++)
	{
		a[i][i]=0;
		scanf("%d %d %d",&h[i],&L,&R);
		if(L!=0)
		{
			a[i][L]=1;
			a[L][i]=1;
		}
		if(R!=0)
		{
			a[i][R]=1;
			a[R][i]=1;
		}
	}
	
	for(int k=1;k<=n;k++)
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				if(a[i][j]>a[i][k]+a[k][j])
					a[i][j]=a[i][k]+a[k][j];
					
	for(int i=1;i<=n;i++)
	{
		int s=0;
		for(int j=1;j<=n;j++)
			s=s+a[i][j]*h[j];
		if(s<Min)	Min=s;
	}
	
	printf("%d\n",Min);
	return 0;
}
