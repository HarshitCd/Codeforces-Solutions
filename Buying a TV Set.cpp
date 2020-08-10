#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a, b, x, y;
    cin>>a>>b>>x>>y;
    long long c=x, d=y;
    x = __gcd(x, y);
    c/=x;
    d/=x;

    cout<<min(a/c, b/d);
    return 0;
}

