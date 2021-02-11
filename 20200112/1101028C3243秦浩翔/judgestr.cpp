#include<bits/stdc++.h>
using namespace std;

string s1,s2;

string change(string s)
{
	for(int i=0;i<s.size();i++)
		if(isupper(s[i]))	s[i]=s[i]+32;
	return s;
}

int main()
{
	cin>>s1>>s2;
	if(s1.size()!=s2.size())	printf("1\n");
	else if(s1.size()==s2.size()&&s1==s2)	printf("2\n");
	else if(change(s1)==change(s2)&&s1.size()==s2.size())	printf("3\n");
	else if(s1.size()==s2.size()&&s1!=s2)	printf("4\n");
	return 0;
}
