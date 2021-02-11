#include<bits/stdc++.h>
using namespace std;

char str[100009];
int l=0,r,mid,n,b[3];

bool ook(int a)
{
	for(int i=1;i<=mid;i++)
		if(str[a+i]=='1') return false;
	for(int i=1;i<=mid;i++)
		if(str[a-i]=='1') return false;
	return true;
}

bool ok(int mid)
{
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		if(str[i]!='1'&&ook(i))
		{
			sum++;
			b[sum]=i;
			str[i]='1';
			//cout<<mid<<" "<<i<<endl;
		}
		if(sum>=2)	
		{
			str[b[1]]='0';
			str[b[2]]='0';
			//cout<<b[1]<<" "<<b[2]<<endl;
			return true;
		}
	}
	return false;
}

int main()
{
	freopen("dist.in","r",stdin);
	freopen("dist.out","w",stdout);
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		cin>>str[i];
	}
	for(int i=1;i<=n;i++)
		
	r=n;
	while(l<r)
	{
		mid=(l+r+1)/2;
		if(ok(mid))	l=mid;
		else r=mid-1;
		//cout<<mid<<endl;
	}
	printf("%d\n",l);
	return 0;
}
