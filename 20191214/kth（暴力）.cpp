#include<queue>
#include<cstdio>
#include<iostream>
using namespace std;

priority_queue<int> q;

int n,k,tmp,ans;
char pd='0';
int b[100002];
int ab[100002];

void pprint()
{
	for(int i=1;i<k;i++)
	{
		b[i]=q.top();
		q.pop();
	}
	ans++;
	ab[ans]=q.top();
	for(int i=1;i<k;i++)
		q.push(b[i]);
}

int main()
{
	//freopen("in.txt","r",stdin);
	
	scanf("%d %d",&n,&k);
	//printf("%d %d\n",n,k);
	for(int i=1;i<=n;i++)
	{
		cin>>pd;
		//cout<<pd<<endl;
		if(pd=='I')
		{
			scanf("%d",&tmp);
			q.push(tmp);
			continue;
		}
		else
		{
			pprint();
			continue;
		}
	}
	for(int i=1;i<=ans;i++)
		printf("%d\n",ab[i]);
	return 0;
}
