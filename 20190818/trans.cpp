#include<bits/stdc++.h>
using namespace std;

int a,b,c,d;

int main()
{
	freopen("trans.in","r",stdin);
	freopen("trans.out","w",stdout);
	scanf("%d %d %d",&a,&b,&c);
	d=a-b;
	d=d-c;
	if(d<=0)
		cout<<abs(d)<<endl;
	else
		cout<<0<<endl;
		
	return 0;
}
