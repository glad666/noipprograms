#include<bits/stdc++.h>
using namespace std;

int jc(int n)
{
	int ans;
	if(n==0)	ans=1;
	else	ans=n*jc(n-1);
	return ans;
}

int main()
{
	int a;
	cin>>a;
	cout<<jc(a)<<endl;
	return 0;
}
