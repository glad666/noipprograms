#include<bits/stdc++.h>
using namespace std;

int p[109],n,ans;

int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&p[i]);
	
	for(int i=1;i<=n;i++)
		if(p[i]>p[i+1])
		{
			ans=i;
			break;
		}
	printf("%d\n",ans);
	return 0;
}
