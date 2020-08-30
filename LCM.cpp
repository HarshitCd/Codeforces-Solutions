#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, c=1, s;
    cin>>n;
    s=sqrt(n);
    c=(s*s==n)? 1: 2;
    for(long long i=2; i<=s; i++) if(n%i==0) c+=2;

    cout<<c;
    return 0;
}
