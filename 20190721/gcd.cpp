//gcd(a,b)=gcd(b,a%b)
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(a%b==0)	return b;
	else gcd(b,a%b);
}

int main()
{
	int m,n;
	cin>>m>>n;
	cout<<gcd(m,n)<<endl;
	return 0;
}
