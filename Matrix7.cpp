#include <iostream>
using namespace std;
void nhap(int a[100][100],int n){
    for (int i=0; i<n ;i++){
        for (int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
}
void xuat(int a[][100],int n,int m){
    for (int i=0; i<n ;i++){
        for (int j=0; j<m; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a[100][100],n,m;
        cin>>n>>m;
        bool row[n]={false}; bool col[m]={false};
        for (int i=0; i<n ;i++){
       		 for (int j=0; j<m; j++){
	            cin>>a[i][j];
	            if (a[i][j]==1) {
	                row[i]=true;
	                col[j]=true;
	            }
        }
        }
        for (int i=0; i<n ;i++)
	        for (int j=0; j<m; j++){
	            if (a[i][j]==1 and row[i] and col[j]) {
	                for (int k=0; k<n; k++){
	                    a[k][j]=1;
	                }
	                for (int k=0; k<m; k++){
	                    a[i][k]=1;
	                }
	            }
    		}
    xuat(a,n,m);
	cout<<endl;}
    return 0;
}