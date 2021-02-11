#include<bits/stdc++.h>
using namespace std;

const int xz[5]={0,2,1,-1,-2};
const int yz[5]={0,1,2,2,1};
int m,n,len=10000,s=0;

void go(int step,int x,int y)
{
	int xx,yy;
	for(int i=1;i<=4;i++)
	{
		xx=x+xz[i];
		yy=y+yz[i];
		if((xx>=0)&&(xx<=m)&&(yy>=0)&&(yy<=n))
		{
			if((xx==m)&&(yy==n))
			{
				s++;
				if(step<len)
				{
					len=step;
				}
			}
			else
				go(step+1,xx,yy);
		}
	}
}

int main()
{
	cin>>m>>n;
	
	go(1,0,0);
	
	if(len==10000)	cout<<"-1"<<endl;
	else cout<<len<<endl<<s<<endl;
	return 0;
}
