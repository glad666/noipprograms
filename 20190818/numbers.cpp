#include<bits/stdc++.h>
using namespace std;

int n,s,k;

int fj(int a)
{
	int ans=0;
	while(a!=0)
	{
		a=a/10;
		ans++;
	}
	return ans;
}

int main()
{
	freopen("numbers.in","r",stdin);
	freopen("numbers.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		k=fj(i)%2; 
		//cout<<k<<endl;
		if(k!=0)
			s=s+1;
		k=0;
	}
	
	cout<<s<<endl;
	return 0;
}
