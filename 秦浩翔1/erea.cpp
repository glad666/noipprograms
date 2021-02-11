#include<bits/stdc++.h>
using namespace std;

char Map[12][202];
int s,m=1,n=1;
const int xz[5]={0,-1,0,1,0};
const int yz[5]={0,0,1,0,-1};

void go(int x,int y)
{
	int xx,yy;
	for(int i=1;i<=4;i++)
	{
		xx=x+xz[i];
		yy=y+yz[i];
		if((xx>=1)&&(xx<=m)&&(yy>=1)&&(yy<=n)&&(Map[xx][yy]=='0'))
		{
			Map[xx][yy]='*';
			go(xx,yy);
		}
	}
}

int main()
{
	freopen("erea.in","r",stdin);
	freopen("erea.out","w",stdout);
	while(cin>>Map[m])
	{
		m++;
	}
	n=strlen(Map[1]);
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
		{
			if(Map[i][j]=='*')	continue;
			else if((i==1)||(i==m)||(j==1)||(j==n))
				go(i,j);
			else if(Map[i][j]=='0')
				s++;
		}
	cout<<s<<endl;
	return 0;
}
