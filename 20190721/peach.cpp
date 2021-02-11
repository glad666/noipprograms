#include<bits/stdc++.h>
using namespace std;
int n;
long long d=2;
int main()
{
	cin>>n;
	for(int i=1;i<n;i++)
		d=(d+1)*2;
	cout<<d<<endl;
	return 0;
}
