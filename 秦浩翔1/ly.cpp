#include<bits/stdc++.h>
using namespace std;

int n;
long long s; 

int main()
{
	freopen("ly.in","r",stdin);
	freopen("ly.out","w",stdout);
	cin>>n;
	if(n<=5)	s=n*300;
	else s=n*280;
	cout<<s<<endl;
	return 0;
}
