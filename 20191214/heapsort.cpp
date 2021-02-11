#include<bits/stdc++.h>
using namespace std;

int n,a[200002],len;

void shift(int r,int n)
{
	int k=r*2;
	while(k<=n)
	{
		if((k<n)&&(a[k]>a[k+1]))	k++;
		if(a[k]>a[r])	break;
		else
		{
			swap(a[k],a[r]);
			r=k;
			k=r*2;
		}
	}
}

void creatheap()
{
	for(int i=n/2;i>=1;i--)
		shift(i,n);
}

int main()
{
	//freopen("heapsort.in","r",stdin);
	//freopen("heapsort.out","w",stdout);
	
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	len=n;
	creatheap();
	for(int i=1;i<=n;i++)
	{
		printf("%d ",a[1]);
		a[1]=a[len];
		len--;
		shift(1,len);
	}
	printf("\n");
	return 0;
 } 
