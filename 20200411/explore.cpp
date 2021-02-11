#include<bits/stdc++.h>
using namespace std;

int n,k,a[30009],mid,L,R;

bool ok(int b)
{
	int last=0,num=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]-a[last]>=b)
		{
			num++;
			last=i;
		}
		if(num>=k)	return true;
	}
	return false;
}

int main()
{
	freopen("explore.in","r",stdin);
	freopen("explore.out","w",stdout);
	scanf("%d %d",&n,&k);
	
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		a[i]=a[i]+a[i-1];
	}
	//for(int i=1;i<=n;i++) cout<<a[i]<<" ";
	//cout<<endl;
	
	L=1,R=a[n];
	
	while(L<R)
	{
		mid=(L+R+1)/2;
		if(ok(mid))	L=mid;
		else R=mid-1;
		//cout<<R<<endl;
		//cout<<endl;
	}
	
	printf("%d\n",R);
	return 0;
} 
