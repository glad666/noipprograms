#include<bits/stdc++.h>
using namespace std;

struct zb
{
	int x,y,s;
};
zb yx[10005];

const int xz[5]={0,-1,0,1,0};
const int yz[5]={0,0,1,0,-1};

int Map[22][22],x,y,head,tail,m,n;
bool way[22][22];

int main()
{
	//freopen("mouse.in","r",stdin);
	//freopen("mouse.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>Map[i][j];
	head=0;
	tail=1;
	way[1][1]=1;
	yx[tail].x=1;
	yx[tail].y=1;
	yx[tail].s=1;
	while(tail>head)
	{
		head++;
		for(int i=1;i<=4;i++)
		{
			x=yx[head].x+xz[i];
			y=yx[head].y+yz[i];
			if((x>=1)&&(x<=n)&&(y>=1)&&(y<=m)&&(Map[x][y]==0)&&(way[x][y]==0))
			{
				//cout<<1<<endl;
				tail++;
				yx[tail].x=x;
				yx[tail].y=y;
				yx[tail].s=yx[head].s+1;
				way[x][y]=1;
				if((x==n)&&(y==m))
				{
					cout<<yx[tail].s<<endl;
					return 0;
				}
			}
		}
	}
	cout<<-1<<endl;
	return 0;
} 
