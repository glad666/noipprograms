#include<bits/stdc++.h>
using namespace std;

int n,m;
long long fruit[100009],L,mid;
long long R=10000000000000011;

bool ok(long long a)
{
	long long cnt=0,i=1,v=a;
	while(i<=n)
	{
		while(fruit[i]<=v)
		{
			v=v-fruit[i];
			i++;
		}
		cnt++;
		v=a;
	}
	if(cnt<=m)	return true;
	else return false;
}

int main()
{
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&fruit[i]);
		if(fruit[i]>L)	L=fruit[i];
	}
	
	while(L<R)
	{
		mid=(L+R)/2;
		if(ok(mid))
			R=mid;
		else
			L=mid+1;
	}
	
	printf("%lld\n",L);
	return 0;
} 
