#include<bits/stdc++.h>
using namespace std;

int n,h[1009],ans,sum;

int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&h[i]);
		sum=sum+h[i];
	}
	sum=sum/n;
	for(int i=1;i<=n;i++)
	{
		if(h[i]>sum)	ans++;
	}
	printf("%d\n",ans);
	return 0;
} 
