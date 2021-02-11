#include<bits/stdc++.h>
using namespace std;

int n,m,color[209];
vector<int> node[209];

bool dfs(int v,int c)
{
	color[v]=c;
	for(int i=0;i<node[v].size();i++)
	{
		if(color[node[v][i]]==c)
			return false;
		if((color[node[v][i]]==0)&&(!dfs(node[v][i],-c)))
			return false;
	}
	return true;
}

int main()
{
	freopen("graph.in","r",stdin);
	freopen("graph.out","w",stdout);
	
	scanf("%d %d",&n,&m);
	for(int i=0;i<m;i++)
	{
		int u,v;
		scanf("%d %d",&u,&v);
		node[u].push_back(v);
		node[v].push_back(u);
	}
	
	for(int i=0;i<n;i++)
	{
		if(!color[i])
		{
			if(!dfs(i,1))
			{
				printf("NO\n");
				return 0;
			}
		}
	}
	printf("YES\n");
	
	return 0;
}
