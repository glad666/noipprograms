#include<bits/stdc++.h>
using namespace std;

int n,h[1009],pj,s;

int main()
{
	freopen("num.in","r",stdin);
	freopen("num.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>h[i];
		pj+=h[i];
	}
	pj=pj/n;
	
	for(int i=1;i<=n;i++)
		if(h[i]>pj)	s++;
	cout<<s<<endl;
	return 0;
}
