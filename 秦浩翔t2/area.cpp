#include<bits/stdc++.h>
using namespace std;

int n,m,Max=1,len,Map[102][102],k=1;
const int xz[5]={0,-1,0,1,0};
const int yz[5]={0,0,1,0,-1};

void go(int x,int y)
{
	int xx,yy;
	for(int i=1;i<=4;i++)
	{
		xx=x+xz[i];
		yy=y+yz[i];
		if((xx>=1)&&(xx<=n)&&(yy>=1)&&(yy<=m)&&(Map[xx][yy]==1))
		{
			Map[xx][yy]=0;
			Max++;
			go(xx,yy);
		}
	}
}

int main()
{
	freopen("area.in","r",stdin);
	freopen("area.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>Map[i][j];
	
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
		{
			if(Map[i][j]==0)	continue;
			else if(Map[i][j]==1)
			{
				Map[i][j]=0;
				go(i,j);
				if(Max>len)	len=Max;
				Max=1;
			}
		}
	cout<<len<<endl;
	return 0;
}
