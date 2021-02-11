#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("score.in","r",stdin);
	freopen("score.out","w",stdout);
	int a,b,c;
	double s; 
	cin>>a>>b>>c;
	s=(a*0.2)+(b*0.3)+(c*0.5);
	cout<<fixed<<setprecision(0)<<s<<endl;
	return 0;
}
