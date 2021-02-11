#include<bits/stdc++.h>
using namespace std;

long long house[100009],L,R,mid;
int n,m;

bool ok(int a)
{
	int tmp=house[0];
	int sum=1;
	for(int i=0;i<n;i++)
		if(house[i]-tmp>=a)
		{
			tmp=house[i];
			sum++;
			if(sum>=m)	return true;
		}
		return false;
}

int main()
{
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
		scanf("%d",&house[i]);
		
	sort(house,house+n);
	
	L=0;
	R=house[n-1]-house[0];
	
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
