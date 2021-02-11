#include<bits/stdc++.h>
using namespace std;

int x,y,z;
map<int,int>mp;
map<int,int>::iterator I;

int main()
{
	freopen("dq.in","r",stdin);
	while(~scanf("%d",&x)&&x)
	{
		//cout<<"x="<<x<<endl;
		if(x==1)
		{
			scanf("%d %d",&y,&z);
			mp[z]=y;
		}
		else if(x==2)
		{
			if(mp.empty())
			{
				printf("0\n");
				continue;
			}
			
			I=mp.end();
			I--;
			printf("%d\n",I->second);
			mp.erase(I);
		}
		else if(x==3)
		{
			if(mp.empty())
			{
				printf("0\n");
				continue;
			}
			
			I=mp.begin();
			printf("%d\n",I->second);
			mp.erase(I);
		}
	}
	return 0;
}
