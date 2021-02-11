#include<bits/stdc++.h>
using namespace std;
int main()
{
	    int n,n1,i=2;
	    cin>>n;
	    n1=n;
	    cout<<n<<"=";
		while(n!=1)
		{
			while(n%i==0)
			{
				if(n==n1)	cout<<i;
				else	cout<<"*"<<i;
				n=n/i;
			}
			i++;
		}
		cout<<endl;
	return 0;
} 
