#include<bits/stdc++.h>
#define ll long long
using namespace std;

int gcd(ll a, ll b){
    if (a == 0)
        return b;
    return gcd(b % a, a);
 }


  // Function to return LCM of two numbers
  void lcm(ll &a, ll &b)
  {
    ll c = gcd(a, b);
    a/=c;

  }

int main(){
    ll n, k, m=1, t, z=0;
    cin>>n>>k;
    while(k--) m*=10;
    lcm(n, m);
    cout<<n;
    while(m/10){
        cout<<0;
        m/=10;
    }
    return 0;
}
