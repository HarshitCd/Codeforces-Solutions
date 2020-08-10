#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    long long n, a=0, t, i=0;
    cin>>t;
    for(int j=0; j<t; j++){
        cin>>n;
        ll ans = n;
        while (n >= 10) {
            ll last = n % 10;
            ll temp = n / 10;
            ans += temp;
            temp += last;
            n = temp;
        }
        cout<<ans<<endl;
    }
    return 0;
}
