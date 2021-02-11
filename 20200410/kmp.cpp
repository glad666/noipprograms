#include<bits/stdc++.h>
using namespace std;

const int N = 1000009;
char s[N],t[N];
int Next[N],lens,lent;

void getNext()
{
	int k=0,j=1;
	Next[1]=0;
	while(j<lent)
	{
		if(k==0||t[k]==t[j])	
			Next[++j]=++k;
		else	k=Next[k];
	}
}

int main()
{
	freopen("kmp.in","r",stdin);
	freopen("kmp.out","w",stdout);
	
	scanf("%s",s+1);
	scanf("%s",t+1);
	
	lens=strlen(s+1);
	lent=strlen(t+1);
	
	getNext();
	
	int i=1,j=1,f=0;
	while(i<=lens&&j<=lent)
	{
		if(j==0||s[i]==t[j])
		{
			i++;
			j++;
		}
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
