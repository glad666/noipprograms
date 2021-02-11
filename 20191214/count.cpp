#include<bits/stdc++.h>
using namespace std;

struct pp
{
	int zhi,number;
	bool operator < (const pp &a)const
	{
		return a.zhi<zhi;
	}
};

priority_queue <pp>dui;
pp tem;
int n,m,k;
int a[500002],b[500002],c[500002],x[500002];

int js(int z)
{
	return a[z]*x[z]*x[z]+b[z]*x[z]+c[z];
}

int main()
{
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++)
		scanf("%d %d %d",&a[i],&b[i],&c[i]);
	for(int i=1;i<=n;i++)
	{
		tem.zhi=a[i]+b[i]+c[i];
		tem.number=i;
		dui.push(tem);
		x[i]=1;
	}
	
	for(int i=1;i<=m;i++)
	{
		printf("%d ",dui.top().zhi);
		k=dui.top().number;
		x[k]++;
		tem.number=k;
		tem.zhi=js(k);
		dui.pop();
		dui.push(tem);
	}
	printf("\n");
	return 0;
}
