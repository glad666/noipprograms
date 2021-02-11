#include<bits/stdc++.h>
using namespace std;

int n,m,a[159],b[159],mc[109];

int main()
{
	freopen("revegetate.in","r",stdin);
	freopen("revegetate.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		cin>>a[i]>>b[i];
		if(a[i]>b[i])	swap(a[i],b[i]);
	}
	
	for(int i=1;i<=n;i++)
	{
		int g;
		for(g=1;g<=4;g++)
		{
			bool pd=true;
			for(int j=0;j<m;j++)
			{
				if(b[j]==i&&mc[a[j]]==g)
				{
					pd=false;
					break;
				}
			}
			if(pd==true)	break;
		}
		mc[i]=g;
		cout<<g;
	}
	cout<<endl;
	return 0;
}
