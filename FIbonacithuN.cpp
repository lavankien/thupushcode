#include <iostream>
#include <math.h>
long long s=1000000000+7;
using namespace std;
int main()
{
	long long a[1001];
	a[0]=0;
	a[1]=a[2]=1;
	int t;
	cin>>t;
	int n;
	while(t--)
	{
		cin>>n;		
		for (int i=3; i<=n; i++)
			a[i]=(a[i-1]%s + a[i-2]%s)%s;
		cout<<a[n]<<endl;
	}
	return 0;
}
