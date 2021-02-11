#include<bits/stdc++.h>
using namespace std;

const int N =1E+9;

long long n,m,L,R,mid,ma,ans;
bool Map[N];

void tian(long long a,long long b)
{
	for(int i=a;i<=b;i++)	Map[i]=1;
}

bool ok(long long dis)
{
	long long place=0;
	ans=0;
	while(place<=ma)
	{
		if(place<=ma)
		{
			place+=mid;
			while(Map[place]==0&&place<=ma)	place++;
			ans++;
			//cout<<place<<endl;
			if(ans>=n)	return true;
		}
	}
	return false;
}

int main()
{
	freopen("co.in","r",stdin);
	scanf("%lld %lld",&n,&m);
	for(int i=1;i<=m;i++)
	{
		long long a,b;
		scanf("%lld %lld",&a,&b);
		ma=max(b,ma);
		tian(a,b);
	}
	
	L=1;R=ma;
	
	//cout<<ma<<endl;
	
	while(L<R)
	{
		mid=(L+R+1)/2;
		if(ok(mid))	L=mid;
		else R=mid-1;
		//cout<<mid<<endl;
		//cout<<endl;
	}
	printf("%lld\n",R);
	return 0;
}
