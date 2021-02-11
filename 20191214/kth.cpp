#include<bits/stdc++.h>
using namespace std;

priority_queue<int,vector<int>,greater<int> >q;

int n,k,tmp,ans,b[100002];
char pd;

int main()
{
	freopen("kth.in","r",stdin);
	
	scanf("%d %d",&n,&k);
	for(int i=1;i<=n;i++)
	{
		cin>>pd;
		if(pd=='I')
		{
			scanf("%d",&tmp);
			if(q.size()<k)
				q.push(tmp);
			else if(tmp>q.top())
				{
					q.pop();
					q.push(tmp);
				}
		}
		else	b[++ans]=q.top();
	}
	for(int i=1;i<=ans;i++)
		printf("%d\n",b[i]);
	return 0;
 } 
