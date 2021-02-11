#include<bits/stdc++.h>
using namespace std;

struct node{
	int x,y,w;
};

int n,tot=1,father[509],sum,ans;
node bian[250009];

bool cmp(node a,node b)
{
	return a.w<b.w;
}

int getfather(int a)
{
	if(a==father[a])	return a;
	else a=getfather(father[a]);
	return a;
}

void hebin(int a,int b)
{
	a=getfather(a);
	b=getfather(b);
	if(a!=b)	father[a]=b;
}

int main()
{
	freopen("highways.in","r",stdin);
	freopen("highways.out","w",stdout);
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)	father[i]=i;
	
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		{
				bian[tot].x=i;
				bian[tot].y=j;
				scanf("%d",&bian[tot].w);
				//cout<<i<<" "<<j<<" "<<bian[tot].w<<endl;
				tot++;			
		}
		
	//cout<<tot<<endl;
	//for(int i=1;i<=tot;i++)
	//	cout<<bian[i].w<<" ";
	//cout<<endl;
	
	sort(bian+1,bian+tot+1,cmp);
	
	//for(int i=1;i<=tot;i++)
	//	cout<<bian[i].w<<" ";
	//cout<<endl;
	
	for(int i=1;i<=tot;i++)
	{
		if(getfather(bian[i].x)!=getfather(bian[i].y)&&bian[i].w!=0)
		{
			hebin(bian[i].x,bian[i].y);
			//cout<<bian[i].x<<" "<<bian[i].y<<endl;
			sum++;
			ans=bian[i].w;
			//cout<<bian[i].x<<" "<<bian[i].y<<endl;
		}
		if(sum==n-1)	break;
	}
	printf("%d\n",ans);
	return 0;
}
