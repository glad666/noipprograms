#include<bits/stdc++.h>
using namespace std;


int n,pnum,rnum,rdigit,len;
char tmp;
string s2,s3,s,s1;
char man[9]={'A','B','C','D','E','F','G'};

void chag(int a)
{
	for(int i=a;i<len;i++)
	{
		man[i]=man[i+1];
	}
 } 
 
void pwrint()
{
	for(int i=0;i<len;i++)
		cout<<man[i];
	cout<<endl;
}

int main()
{
	//freopen("in.txt","r",stdin);
	scanf("%d",&n);
	cin>>s1;
	for(int i=1;i<s1.size();i++)
	{
		s1[i]=s1[i+1];
	}
	cin>>s;
	len=n-1;
	//cout<<s1<<endl;
	
	for(int i=0;;i++)
	{
		if(s1[pnum]==s[rnum])
		{
			pnum++;
			rnum++;
			rdigit++;
			if(rdigit==n)	rdigit=0;
			continue;
		}
		else if(s1[pnum]!=s[rnum])
		{
			chag(rnum);
			len--;
			if(len==0)
			{
				printf("%c\n",man[0]);
				return 0;
			}
			rnum++;
			rdigit++;
			if(rdigit==n)	rdigit=0;
			//pwrint();
			continue;
		}
	}
	return 0;
}
