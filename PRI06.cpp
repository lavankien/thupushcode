#include <iostream>
#include <math.h>
using namespace std;
int nt(int n){
	if (n<2) return 0;
	for (int i=2; i<=sqrt(n);i++)
		if (n%i==0) return 0;
	return 1;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,t;
	cin>>t;
	cin.ignore();
	while(t--){
		cin>>n;
		int kq=0,kq1=0;
		for (int i=2; i<n; i++){
			if (kq!=0) continue;
			for (int j=n; j>0; j--)
				if (i+j==n and nt(i) and nt(j))
					{
						kq=i; kq1=j;
						break;
					}
			
		}
		cout<<kq<<" "<<kq1;
		cout<<endl;
	}
	return 0;
}