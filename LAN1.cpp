#include <iostream>
#include <string>
#include <vector>
using namespace std;
void balance(string s,string s1){
    if (s.size()>s1.size())
        while(s.size()!=s1.size()){
            s1='0'+s1;
        }
    if(s1.size()>s.size()) while (s.size()!=s1.size())
    {
        s='0'+s1;
        /* code */
    }
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        string s,s1;
        cin>>s>>s1;
        balance(s,s1);
        cout<<s;
        vector <string> res;
        for (int i=0; i<s.size();i ++){
            res[i]=s[i]-s1[i]-'0';
        }
        for (int i=0 ;i<res.size(); i++){
            cout<<res[i];
        }
        
    }
    
    return 0;
}