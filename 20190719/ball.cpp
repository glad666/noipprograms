#include<bits/stdc++.h>
using namespace std;
int h[2002][2002],n,m,s;
bool xj[2002][2002];
int main()
{
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;
		xj[x][y]=true;
	}
	
	if(xj[1][1]==true)
	{
		cout<<"0"<<endl;
		return 0;
	}
	else h[1][1]=1;
	
	for(int x=2;x<=n;x++)
		for(int y=1;y<=x;y++)
		{
			if(xj[x][y]==true)
				h[x][y]=0;
			else
				h[x][y]=h[x-1][y-1]+h[x-1][y];
		}
	
	s=0;
	for(int i=1;i<=n;i++)
		s+=h[n][i];
	cout<<s<<endl;
	return 0;
}
