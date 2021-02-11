#include<bits/stdc++.h>
using namespace std;

long long wood[100009],Max,L,R,mid;
int n,k;

bool ok(int a)
{
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum=sum+wood[i]/a;
		if(sum>=k)	return true;
	}
	return false;
}

int main()
{
	scanf("%d %d",&n,&k);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&wood[i]);
		if(wood[i]>Max)	Max=wood[i];
	}
	
	L=0;
	R=Max;
	
	while(L<R)
	{
		mid=(L+R+1)/2;
		if(ok(mid))
			L=mid;
		else
			R=mid-1;
	}
	
	printf("%d\n",L);
	return 0;
}
