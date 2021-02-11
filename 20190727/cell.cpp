#include<bits/stdc++.h>
using namespace std;

struct zb
{
	int x,y,s;
};
zb route[10005];

char Map[105][105];
int m,n,head,tail,x,y,sum;
const int xz[5]={0,-1,0,1,0};
const int yz[5]={0,0,1,0,-1};

int main()
{
	//freopen("cell.in","r",stdin);
	//freopen("cell.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>Map[i][j];
	
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
		{
			if(Map[i][j]!='0')
			{
				head=0;
				tail=1;
				route[1].x=i;
				route[1].y=j;
				route[1].s=1;
				while(tail>head)
				{
					head++;
					for(int k=1;k<=4;k++)
					{
						x=route[head].x+xz[k];
						y=route[head].y+yz[k];
						if((x>=1)&&(x<=n)&&(y>=1)&&(y<=m)&&(Map[x][y]!='0'))
						{
							Map[x][y]='0';
							tail++;
							route[tail].x=x;
							route[tail].y=y;
							route[tail].s=route[head].s+1;
						}
					}
				}
				sum++;
			}
		}
	cout<<sum<<endl;
	return 0;
}
