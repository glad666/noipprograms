#include<bits/stdc++.h>
using namespace std;

bool pr(int a)
{
	for(int i=2;i<=sqrt(a);i++)
		if(a%i==0)	return false;
	return true;
}

int main()
{
	int x;
	cin>>x;
	if(pr(x)==true)	cout<<"Yes"<<endl;
	else	cout<<"No"<<endl;
	return 0;
}
