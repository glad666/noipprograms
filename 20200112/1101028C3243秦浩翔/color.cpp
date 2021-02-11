#include<bits/stdc++.h>
using namespace std;

int n,m,c;
long long ans;

long long cheng()
{
	long long i=c+1,k=n*m,aans=1;
	while(k!=0)
	{
		if(k%2==1)	aans=aans*i;
		i=(i*i)%1000000007;
		k=k/2;
	} 
	return aans;
}

int main()
{
	scanf("%d %d %d",&n,&m,&c);
	ans=cheng()-(c+1)-(n*n-1)-(m*m-1)+2;
	ans=ans-(n*m*(c-1));
	ans=ans/(n*m);
	ans=ans%1000000007;
	printf("%d\n",ans);
	
	return 0;
}
