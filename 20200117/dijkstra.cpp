#include<bits/stdc++.h>
using namespace std;

const int N=1e5+1000,M=2e5+1000,INF=0x3f3f3f3f;

priority_queue<pair<int,int> >q;

int n,k,t;
int first[N],next[M],to[M],w[M],tot;
int dis[N];
bool vis[N];


void add(int x,int y,int z)
{
	next[++tot]=first[x];
	first[x]=tot;
	to[tot]=y;
	w[tot]=z;
}

void dijkstra()
{
	memset(dis,INF,sizeof(dis));
	dis[t]=0;
	q.push(make_pair(-dis[t],t));
	
	while(!q.empty())
	{
		int u=q.top().second;
		q.pop();
		
		if(vis[u])	continue;
		vis[u]=1;
		
		for(int e=first[u];e!=0;e=next[e])
		{
			int v=to[e];
			if(dis[v]>dis[u]+w[e])
			{
				dis[v]=dis[u]+w[e];
				q.push(make_pair(-dis[v],v));
			}
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
	
	dijkstra();
	
	printf("%d\n",dis[n]);
	
	return 0;
} 
