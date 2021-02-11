#include<bits/stdc++.h>
using namespace std;

const int N = 1000009;
char s[N],t[N];
int Next[N],T;

void getNext(int lent)
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
	freopen("outlipo.in","r",stdin);
	freopen("outlipo.out","w",stdout);
	
	scanf("%d",&T);
	
	while(T--)
	{
		int lens,lent;
		scanf("%s",t+1);
		scanf("%s",s+1);
		
		lens=strlen(s+1);
		lent=strlen(t+1);
		
		getNext(lent);
		
		int i=1,j=1,ans=0;
		
		while(i<=lens)
		{
			if(j==0||s[i]==t[j])	i++,j++;
			else j=Next[j];
			
			if(j>lent)
			{
				ans++;
				i--;
				j=Next[j-1];	
			}	
		}
		printf("%d\n",ans);
	}
	return 0;
}
