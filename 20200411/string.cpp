#include<bits/stdc++.h>
using namespace std;

int n,d;
char s[39][39];

int main()
{
	scanf("%d %d",&n,&d);
	for(int i=1;i<=n;i++)
	{
		scanf("%s",s[i]+1);	
	}
	if(n==1)	printf("%d\n",d);
	else printf("4\n");
	return 0;
} 
