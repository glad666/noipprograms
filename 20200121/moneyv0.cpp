#include<bits/stdc++.h>
using namespace std;

int n,m,a[10009][309],r[10009],money,ans[10009],c[10009];

bool check()
{
	int t,tot=0,k=0;
	while(tot<n)
	{
		t=0;
		for(int i=1;i<=n;i++)
		{
			if(!r[i])
			{
				t++;
				ans[t]=i;
				
				tot++;
				money=money+100;
				r[i]=-1;
			}
		}
		if(t==0)	return false;
		money=money+k*t;
		k++;
		for(int i=1;i<=t;i++)
			for(int j=1;j<=c[ans[i]];j++)
				r[a[ans[i]][j]]--;
	}
	return true;
}

int main()
{
	scanf("%d %d",&n,&m);
	for(int i=1;i<=m;i++)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		c[y]++;
		a[y][c[y]]=x;
		r[x]++;
	}
	
	if(check())	printf("%d\n",money);
	else	printf("Poor Xed");
	return 0;
}
