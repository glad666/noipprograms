#include<bits/stdc++.h>
using namespace std;

int len=10000,n,m;
int mmap[30][21];
bool way[30][21];
const int xz[5]={0,-1,0,1,0};
const int yz[5]={0,0,1,0,-1};

void go(int step,int x,int y)
{
	int xx,yy;
	for(int i=1;i<=4;i++)
	{
		xx=x+xz[i];
		yy=y+yz[i];
		if((xx>=1)&&(xx<=n)&&(yy>=1)&&(yy<=m)&&(mmap[xx][yy]==0)&&(way[xx][yy]==0))
		{
			way[xx][yy]=1;
			if((xx==n)&&(yy==m))
			{
				if((step<len))	len=step;
			}
			else if(step+1<len)
				go(step+1,xx,yy);
			way[xx][yy]=0;
		}
	}
}

int main()
{
	//freopen("in.txt","r",stdin);
	memset(way,0,sizeof(way));
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>mmap[i][j];
	
	go(2,1,1);
	
	if(len==10000)	cout<<"-1"<<endl;
	else cout<<len<<endl;
	return 0;
}
