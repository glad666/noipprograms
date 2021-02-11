#include<bits/stdc++.h>
using namespace std;

const int inf = 0x3f3f3f3f;

int n,tmp,Map[109][109],ans=inf,man;
bool rel[109][109];

int main()
{
	//freopen("news.in","r",stdin);
	scanf("%d",&n);
	memset(Map,inf,sizeof(Map));
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&tmp);
		for(int j=1;j<=tmp;j++)
		{
			int a,t;
			scanf("%d %d",&a,&t);
			Map[i][a]=t;
			rel[i][a]=true;
		}
	}
	
	for(int k=1;k<=n;k++)
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)	
				rel[i][j]=rel[i][j]||(rel[i][k]&&rel[k][j]);
	
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(rel[i][j]==0&&rel[j][i]==0&&i!=j)
			{
				printf("disjoint\n");
				return 0;
			}
	
	for(int k=1;k<=n;k++)
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)	
				if(Map[i][k]+Map[k][j]<Map[i][j])
					Map[i][j]=Map[i][k]+Map[k][j];
	
	for(int i=1;i<=n;i++)
	{
		tmp=0;
		for(int j=1;j<=n;j++)
		{
			if(i==j)	continue;
			tmp=max(tmp,Map[i][j]);
		}
		if(ans>tmp)
		{
			ans=tmp;
			man=i;
		}
	}
	
	printf("%d %d\n",man,ans);
	return 0;
} 
