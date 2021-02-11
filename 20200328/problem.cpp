#include<bits/stdc++.h>
using namespace std;

#define N 1000005

int trie[N][26];
int tot,p,ed[N];
char str[15];

void Build()
{
	p=0;
	for(int i=0;i<strlen(str);i++)
	{
		if(trie[p][str[i]-'a']==0)
			trie[p][str[i]-'a']=++tot;
		p=trie[p][str[i]-'a'];
		ed[p]++;
	}
}

int Search()
{
	p=0;
	for(int i=0;i<strlen(str);i++)
	{
		if(trie[p][str[i]-'a']==0)	return 0;
		p=trie[p][str[i]-'a'];
	}
	return ed[p];
}

int main()
{
	freopen("problem.in","r",stdin);
	freopen("problem.out","w",stdout);
	while(gets(str)&&str[0]!='\0')	Build();
	while(scanf("%s",str)!=EOF)
		printf("%d\n",Search());
	return 0;
}
