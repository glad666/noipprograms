#include<bits/stdc++.h>
using namespace std;

const int N=1000010;
int trie[N*31][2],tot,p,f[N],n,ans,tmp,m;
int first[N];

struct bian{
	int to,next,v;
}e[N*2];

void insert(int u,int v,int w)
{
	e[++m].next=first[u];
	first[u]=m;
	e[m].to=v;
	e[m].v=w;
}

void dfs(int x,int fa)
{
	for(int i=first[x];i!=0;i=e[i].next)
	{
		if(e[i].to!=fa)
		{
			f[e[i].to]=f[x]^e[i].v;
			dfs(e[i].to,x);
		}
	}
}

void Build(int x)
{
	p=0;
	for(int i=30;i>=0;i--)
	{
		int t=x>>i&1;
		if(trie[p][t]==0)	trie[p][t]=++tot;
		p=trie[p][t];
	}
}

int Search(int x)
{
	p=0;
	tmp=0;
	for(int i=30;i>=0;i--)
	{
		int t=x>>i&1;
		if(trie[p][t^1])
		{
			p=trie[p][t^1];
			tmp=tmp+(1<<i);
		}
		else
		{
			p=trie[p][t];
		}
	}
	//cout<<tmp<<endl;
	return tmp;
}

int main()
{
	freopen("xorpath.in","r",stdin);
	//freopen("xorpath.out","w",stdout);
	
	scanf("%d",&n);
	
	for(int i=1;i<n;i++)
	{
		int u,v,w;
		scanf("%d %d %d",&u,&v,&w);
		insert(u,v,w);
		insert(v,u,w);
	}
	
	//cout<<1<<endl;
	
	dfs(1,0);
	//cout<<2<<endl;
	
	//cout<<f[2]<<" "<<f[3]<<endl;
	
	for(int i=1;i<=n;i++)
	{
		Build(f[i]);
		//cout<<4<<endl;
		ans=max(ans,Search(f[i]));
		//cout<<5<<endl;
	}
	
	//cout<<3<<endl;
	
	printf("%d\n",ans);
	return 0;
}
