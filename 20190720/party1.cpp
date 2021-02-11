#include<bi ts/stdc++.h>
using namespace std;
int a,b,m,n,k;
int main()
{
	cin>>m>>n>>k;
	for(int i=1;i<=k;i++)
	{
		a++;
		b++;
		if(a==m+1)	a=1;
		if(b==n+1)	b=1;
		cout<<a<<" "<<b<<endl;
	}
	return 0;
}
