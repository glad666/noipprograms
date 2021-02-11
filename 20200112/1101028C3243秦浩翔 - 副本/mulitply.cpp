#include<bits/stdc++.h>
using namespace std;

int m,n,a[10],l1,l2,m1,n1,a1,a2,tmp,j=1;

int leng(int a)
{
	int i=0;
	while(a!=0)
	{
		a=a/10;
		i++;
	}
	return i;
}

void spc(int a)
{
	for(int i=1;i<=a;i++)
		printf(" ");
}

int main()
{
	scanf("%d %d",&m,&n);
	m1=m;
	n1=n;
	a1=m*n;
	for(int i=1;i<=leng(n1);i++)
	{
		a[i]=m*(n%10);
		n=n/10;
		tmp++;
	}
	//cout<<tmp<<endl<<endl;
	l1=leng(a1)-leng(m1);
	spc(l1);
	printf("%d\n",m1);
	l1=leng(a1)-leng(n1);
	spc(l1);
	printf("%d\n",n1);
	l1=leng(a1)-leng(a[1]);
	spc(l1);
	printf("%d\n",a[1]);
	for(int i=1;i<tmp;i++)
	{
		l1=leng(a1)-i-leng(a[i+1]);
		spc(l1);
		printf("%d\n",a[i+1]);
	}
	printf("%d\n",a1);
	return 0;
}
