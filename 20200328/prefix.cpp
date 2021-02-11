#include<bits/stdc++.h>
using namespace std;

#define N 1000010

int trie[N][26];
int tot,p,ed[N],n,m,ans;
char str[15];

void Build()
{
	p=0;
	for(int i=0;i<strlen(str);i++)
	{
		if(trie[p][str[i]-'a']==0)
			trie[p][str[i]-'a']=++tot;
		p=trie[p][str[i]-'a'];
	}
	ed[p]++;
}

int Search()
{
	p=0;
	ans=0;
	for(int i=0;i<strlen(str);i++)
	{
		if(trie[p][str[i]-'a']==0)	return ans;
		p=trie[p][str[i]-'a'];
		ans=ans+ed[p];
	}
	return ans;
}

int main()
{
	freopen("prefix.in","r",stdin);
	freopen("prefix.out","w",stdout);
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%s",str);
		Build();
	}
	for(int i=1;i<=m;i++)
	{
		scanf("%s",str);
		printf("%d\n",Search());
	}
	return 0;
}
