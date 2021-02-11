#include<bits/stdc++.h>
using namespace std;

char k;
int a,b,c,s,zc;

int main()
{
	freopen("rectria.in","r",stdin);
	freopen("rectria.out","w",stdout);
	cin>>k;
	if(k=='J')	cin>>a>>b;
	else cin>>a>>b>>c;
	
	if(k=='J')
	{
		s=a*b;
		zc=(a+b)*2;
		cout<<zc<<" "<<s<<endl;
	}
	else
		cout<<a+b+c<<endl;
	return 0;
}
