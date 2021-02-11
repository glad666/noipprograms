#include<bits/stdc++.h>
using namespace std;

int a,b;

int main()
{
	freopen("sm.in","r",stdin);
	freopen("sm.out","w",stdout);
	cin>>a>>b;
	if(b%a==0)	cout<<a+b<<endl;
	else cout<<b-a<<endl;
	return 0;
 } 
