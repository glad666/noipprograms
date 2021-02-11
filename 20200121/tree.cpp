#include<bits/stdc++.h>
using namespace std;

int n,r[109],c[109],a[109][109],ans[109],tot,num=1,temp;

int main()
{
	freopen("tree.in","r",stdin);
	
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		int j;
		do
		{
			scanf("%d",&j);
			if(j!=0)
			{
				c[i]++;
				a[i][c[i]]=j;
				r[j]++;
			}
		}
		while(j!=0);
	}
	
	for(int i=1;i<=n;i++)
		if(r[i]==0)	ans[++tot]=i;
	
	do
	{
		printf("%d ",ans[tot]);
		temp=ans[tot];
		tot--;
		num++;
		for(int i=1;i<=c[temp];i++)
			{
				r[a[temp][i]]--;
				if(r[a[temp][i]]==0)	ans[++tot]=a[temp][i];
			}
	}
	while(num<=n);
	
	printf("\n");
	return 0;
}
