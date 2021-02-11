#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
	int a,d,i=1,j=1,b[13],c[13],s=0;
	cin>>a>>d;
	while(a!=0)
	{
		b[i]=a%10;
		a=a/10;
		i++;
	}
	i--;
	while(d!=0)
	{
		c[j]=d%10;
		d=d/10;
		j++;
	}
	j--;
	for(int k=1;k<=i;k++)
		for(int p=1;p<=j;p++)
		{
			s+=b[k]*c[p];
		}
	cout<<s<<endl;
	return 0;
}
