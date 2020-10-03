// C++ program to check if x is a perfect square 
#include <iostream> 
#include <math.h> 
using namespace std; 
using ll=long long;
// A utility function that returns true if x is perfect square 
bool isPerfectSquare(ll x) 
{ 
    ll s = sqrt(x); 
    return (s * s == x); 
} 
  
// Returns true if n is a Fibinacci Number, else false 
bool isFibonacci(ll n) 
{ 
    // n is Fibinacci if one of 5*n*n + 4 or 5*n*n - 4 or both 
    // is a perferct square 
    return isPerfectSquare(5 * n *n + 4) || isPerfectSquare(5 * n * n - 4); 
} 
  
// A utility function to test above functions 
int main() 
{ 
    int t;
    cin>>t;
    
    while (t--)
    {
        ll n;
        cin>>n;
        isFibonacci(n) ? cout<<"YES\n" : cout<<"NO\n";
        /* code */
    }
    
    return 0; 
} 