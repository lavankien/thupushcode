#include<iostream> 
using namespace std; 
int mod(string num, int a) 
{ 
    int res = 0; 
    for (int i = 0; i < num.length(); i++) 
         res = (res*10 + (int)num[i] - '0') %a; 
    return res; 
} 

int main() 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string s;
        fflush(stdin);
        getline(cin,s);
        int x; cin>>x;
        cout<<mod(s,x)<<endl;
    }
    return 0; 
}