#include<bits/stdc++.h>
using namespace std;

int main(){
    long long w, h, a=1, n, mo=998244353;
    cin>>w>>h;
    n=w+h;

    for(int i=0; i<n; i++) a = ((a%mo)*2)%mo;

    cout<<a;
}
