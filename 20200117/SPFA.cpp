#include<bits/stdc++.h>
using namespace std;

int first[10001],Next[200002],to[200002],w[200002];
int p[2000000],f[10001],head,tail;
int n,k,t,tot;
bool vis[10001];

void add(int x,int y,int z)
{
	Next[++tot]=first[x];
	first[x]=tot;
	to[tot]=y;
	w[tot]=z;
}

void spfa()
{
	while(head<tail)
	{
		head++;
		int u=first[p[head]];
		vis[p[head]]=0;
		while(u!=0)
		{
			int v=to[u];
			if(f[v]>f[p[head]]+w[u])
			{
				f[v]=f[p[head]]+w[u];
				if(vis[v]==0)
				{
					vis[v]=1;
					tail++;
					p[tail]=v;
				}
			}
			u=Next[u];
		 } 
	}
}

int main()
{
	scanf("%d %d %d",&n,&k,&t);
	
	for(int i=1;i<=k;i++)
	{
		int x,y,z;
		scanf("%d %d %d",&x,&y,&z);
		add(x,y,z);
		add(y,x,z);
	}
	
	fill(f+1,f+n+1,1e+9);
	head=0;
	tail=1;
	p[1]=t;
	f[t]=0;
	spfa();
	printf("%d\n",f[n]);
	return 0;
}



