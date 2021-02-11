#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[40],b[40],c[40];
	int t,len,n;
	cin>>t;
	while(t--!=0)
	{
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		memset(c,0,sizeof(c));
		cin>>a;
		cin>>n;
		len=strlen(a);
		n=n%len;
		strncpy(b,a+(len-n),n);
		strncpy(c,a,len-n);
		strcat(b,c);
		cout<<b<<endl;
	}
	return 0;
}
