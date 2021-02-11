#include<bits/stdc++.h>
using namespace std;

int n,a[1009],m,sum,tot;

int main()
{
	//freopen("vote.in","r",stdin);
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	int tmp=sum/(4*m);
	//cout<<tmp<<endl;
	for(int i=1;i<=n;i++)
	{
		if(a[i]>=tmp)	tot++;
	}
	if(tot>=m)	printf("Yes\n");
	else printf("No\n");
	return 0;
}
