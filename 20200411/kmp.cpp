#include<bits/stdc++.h>
using namespace std;

const int N = 1000009;

char S[N],T[N];
int lens,lent,Next[N];

void getNext()
{
	int j=1,k=0;
	while(j<lent)
	{
		if(k==0||T[j]==T[k])	Next[++j]=++k;
		else k=Next[k];
	}
}

int main()
{
	scanf("%s",S+1);
	scanf("%s",T+1);
	
	lens=strlen(S+1);
	lent=strlen(T+1);
	
	getNext();
	
	int i=1,j=1,f=0;
	while(i<=lens&&j<=lent)
	{
		if(j==0||S[i]==T[j])	i++,j++;
		else j=Next[j];
		
		if(j>lent)
		{
			f=1;
			printf("%d\n",i-lent);
			break;
		}	
	}
	if(f==0)	printf("N0\n");
	return 0;
}
