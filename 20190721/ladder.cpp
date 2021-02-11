#include<bits/stdc++.h>
using namespace std;

int ps(int n)
{
	if(n==0||n==1)	return 1;
	return ps(n-1)+ps(n-2);
}

int main()
{
	int a;
	cin>>a;
	cout<<ps(a)<<endl;
	return 0;	
} 
