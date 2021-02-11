#include<bits/stdc++.h>
using namespace std;

const int xz[5]={0,-1,0,1,0};
const int yz[5]={0,0,1,0,-1};
int n,xx,yy,x2,y2,head,tail,x,y,way[1002][1002];
char Map[1002][1002];

struct zb
{
	int x,y,s;
};
zb route[10005];

int main()
{
	freopen("help.in","r",stdin);
	freopen("help.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>Map[i][j];
	cin>>xx>>yy>>x2>>y2;
	head=0;
	tail=1;
	route[1].x=xx;
	route[1].y=yy;
	route[1].s=1;
	way[xx][yy]=1;
	while(tail>head)
	{
		head++;
		for(int i=1;i<=4;i++)
		{
			x=route[head].x+xz[i];
			y=route[head].y+yz[i];
			if((x>=1)&&(x<=n)&&(y>=1)&&(y<=n)&&(Map[x][y]=='0')&&(way[x][y]==0))
			{
				way[x][y]=1;
				tail++;
				route[tail].x=x;
				route[tail].y=y;
				route[tail].s=route[head].s+1;
				if((x==x2)&&(y==y2))
				{
					cout<<route[tail].s<<endl;
					return 0;
				}
			}
		}
	}
	return 0;
}
