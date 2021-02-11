#include<bits/stdc++.h>
using namespace std;

int n,a[100005],s;

int main()
{
	freopen("maxspan.in","r",stdin);
	freopen("maxspan.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1);
	s=a[n]-a[1];
	cout<<s<<endl;
	return 0;
}
