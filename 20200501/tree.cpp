#include<bits/stdc++.h>
using namespace std;

const int N =40009;

int n,m,x,y,ans;
int root,dep[N],f[N][17];
int first[N+5],to[2*N],Next[2*N],tot;

int lca(int x,int y)
{
	if(dep[x]<dep[y])	swap(x,y);
	
	for(int i=16;i>=0;i--)
	{
		if(dep[f[x][i]]>=dep[y])	x=f[x][i];
		if(x==y)	return x;
	}
	
	//cout<<x<<y<<endl;
	
	for(int i=16;i>=0;i--)
	{
		if(f[x][i]!=f[y][i])
		{
			x=f[x][i];
			y=f[y][i];
		}
	}
	return f[x][0];
}

void gz(int m,int father)
{
	dep[m]=dep[father]+1;
	for(int i=0;i<=15;i++)
		f[m][i+1]=f[f[m][i]][i];
	
	for(int e=first[m];e!=0;e=Next[e])
	{
		int v=to[e];
		if(v==father)	continue;
		f[v][0]=m;
		gz(v,m);
	}
}

void add(int a,int b)
{
	Next[++tot]=first[a];
	first[a]=tot;
	to[tot]=b;
	
	Next[++tot]=first[b];
	first[b]=tot;
	to[tot]=a;
}

int main()
{
	freopen("tree.in","r",stdin);
	//freopen("tree.out","w",stdout);
	
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d %d",&x,&y);
		if(y!=-1)	add(x,y);
		else root=x;
	}
	
	gz(root,0);
	
	scanf("%d",&m);
	for(int i=1;i<=m;i++)
	{
		scanf("%d%d",&x,&y);
		ans=lca(x,y);
		//cout<<lca(x,y)<<endl;
		
		if(ans==x)	printf("1\n");
		else if(ans==y)	printf("2\n");
		else printf("0\n");
	}
	return 0;
}
