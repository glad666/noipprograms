#include<bits/stdc++.h>
using namespace std;

//246913578;

unsigned long long n,ans;

long long lcm(unsigned long long a,unsigned long long b)
{
	if(a%b==0)	return b%1234567890;
	else return lcm(b%1234567890,a%b);
}

int main()
{
	cin>>n;
	n=n%1234567890;
	//ans=n*(246913578/lcm(n,246913578)%1234567890);
	//cout<<ans%1234567890<<endl;
	cout<<(246913578/lcm(n,246913578)%1234567890)*n%1234567890<<endl;
	return 0;
}
