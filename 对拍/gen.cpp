#include<bits/stdc++.h>
using namespace std;
const int n=100;

int main()
{
	srand(time(0));
	cout<<n<<endl;
	for(int i=1;i<=n;i++)
		cout<<rand()%200+1<<" ";
	return 0;
}
