#include<bits/stdc++.h>
using namespace std;

int n,a[11];
bool b[11];

void printb()
{
	for(int i=1;i<=n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

void go(int deb)
{
	for(int i=1;i<=n;i++)
		if(b[i]==0)
		{
			b[i]=1;
			a[deb]=i;
			if(deb==n)
				printb();
			else
				go(deb+1);
			b[i]=0;
		}
}

int main()
{
	cin>>n;
	go(1);
	return 0;
} 
