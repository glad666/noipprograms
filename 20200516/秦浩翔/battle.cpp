#include<bits/stdc++.h>
using namespace std;

int a,b,c,d;

int main()
{
	freopen("battle.in","r",stdin);
	freopen("battle.out","w",stdout);
	scanf("%d%d%d%d",&a,&b,&c,&d);
	while(a>0&&c>0)
	{
		c=c-b;
		if(c<=0)
		{
			printf("Yes\n");
			break;
		}
		//cout<<a<<" "<<c<<endl;
		a=a-d;
		if(a<=0)	
		{
			printf("No\n");
			break;
		}
		//cout<<a<<" "<<c<<endl;
	}
	return 0;
}
