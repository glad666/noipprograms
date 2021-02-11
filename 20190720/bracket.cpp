#include<bits/stdc++.h>
using namespace std;
int a[102],top;
string s;
int main()
{
	cin>>s;
	for(int i=0;i<s.size();i++)
		if(s[i]=='(')
		{
			top++;
			a[top]=i;
		}
		else
		{
			cout<<a[top]<<" "<<i<<endl;
			top--;
		}
	return 0;
}
