#include<bits/stdc++.h>
using namespace std;

const int N=1000005;
char s[N],t[N];
int Next[N],lens,lent,f;

void getNext()
{
	int j=1,k=0;
	Next[1]=0;
	while(j<lent)
	{
		if(k==0||t[j]==t[k])
			Next[++j]=++k;
		else k=Next[k];
	}
}

int main()
{
	freopen("kmp.in","r",stdin);
	scanf("%s",s+1);	lens=strlen(s+1);
	scanf("%s",t+1);	lent=strlen(t+1);
	getNext();
	int i=0,j=0;
	while(i<=lens&&j<=lent)
	{
		if(j==0||s[i]==t[j])	i++,j++;
		else j=Next[j];
		if(j>lent)
		{
			printf("%d\n",i-lent);
			f=1;
			break;
		}
	}
	if(f==0)	printf("NO\n");
	return 0;
}
