#include<bits/stdc++.h>
using namespace std;

long long n,k,ans;

int main()
{
	scanf("%lld%lld",&n,&k);
	if(n%k==0)	printf("0\n");
	else
	{
		n=n-(n/k)*k;
		printf("%lld\n",min(n,k-n));
	}
	return 0;
}
