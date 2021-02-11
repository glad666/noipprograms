#include<bits/stdc++.h>
using namespace std;

int a[109],n,fp[109],ans,Min=999,temp;
bool ppd;

bool pd()
{
	for(int i=1;i<=n;i++)
		if(a[i]!=fp[i])
			return false;
	
	return true;
}

void pl(int k)
{
	int x=a[1];
	for(int i=1;i<k-1;i++)
		a[i]=a[i+1];
	a[temp-1]=x;
}

void tspl()
{
	int x=a[1];
	for(int i=1;i<=n;i++)
		a[i]=a[i+1];
	a[n]=x;
}

int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	
	for(int i=1;i<=n;i++)
		fp[i]=i;
		
	for(int i=1;i<=n+1;i++)
	{
		Min=999;
		temp=0;
		for(int j=1;j<=n;j++)
			if(a[1]<a[j]&&j!=2)
			{
				if(a[j]<Min)
				{
					Min=a[j];
					temp=j;
				}
			}
		if(Min==999)	tspl();
		else pl(temp);
		ans++;
		if(pd())	break;	
	}
	
	printf("%d\n",ans);
	return 0;
 } 
