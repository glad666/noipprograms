#include<bits/stdc++.h>
using namespace std;
string a;
int s=1,n;
int main()
{
	cin>>a;
	for(int i=0;i<a.size();i++)
	{
		n=a[i]-'a'+1;
		s=(s*n)%10007;
	}
	cout<<s<<endl;
	return 0;
}
