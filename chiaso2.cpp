#include <iostream>
#include <math.h>

using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--) {
        long long a,m;
        cin>>a>>m;
        long long p=m;
        int dem=0;
        while(m--) 
		{
            if (((a%p)*(m%p))%p==1) 
            {
            	cout<<m<<endl;
            	dem++;
            	break;
			}
        }
        if (dem==0) cout<<"-1"<<endl;
        
    }
    return 0;
}

