#include<bits/stdc++.h>
using namespace std;

const int xz[5]={0,-1,0,1,0};
const int yz[5]={0,0,1,0,-1};
char Map[105][105];
int n,m,s;

void xb(int x,int y)
{
	int xx,yy;
	for(int i=1;i<=4;i++)
	{
		xx=x+xz[i];
		yy=y+yz[i];
		if((xx>=1)&&(xx<=n)&&(yy>=1)&&(yy<=m)&&(Map[xx][yy]!='0'))
		{
			Map[xx][yy]='0';
			xb(xx,yy);
		}
	}
}

int main()
{
	//freopen("cell.txt","r",stdin);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>Map[i][j];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
		{
			if(Map[i][j]!='0')
			{
				Map[i][j]='0';
				s++;
				xb(i,j);
			}	
		}
	cout<<s<<endl;
	return 0;
}
