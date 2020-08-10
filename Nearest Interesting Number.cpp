#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, s=0;
    cin>>n;
    int b=n;
    a=n;
    while(a){
        s+=a%10;
        a/=10;
    }
    n+=(s%4==0)?0:(s/4+1)*4-s;
    a=n;
    s=0;
    while(a){
        s+=a%10;
        a/=10;
    }
    n+=(s%4==0)?0:(s/4+1)*4-s;
    if(n-4>b && (n-4)%4==0) cout<<n-4;
    else cout<<n;
    return 0;
}
