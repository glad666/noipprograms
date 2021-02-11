#include<bits/stdc++.h>
using namespace std;

int n,r[1009];

int main()
{
	freopen("hs.in","r",stdin);
	freopen("hs.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>r[i];
	sort(r+1,r+n+1);
	cout<<r[n]<<endl;
	return 0;
}
