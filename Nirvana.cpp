#include<bits/stdc++.h>
using namespace std;

long long pro(long long a){
    long long b = 1, c=a, m, d=1;
    while(c){
        d*=c%10;
        c/=10;
    }
    m=d;
    while(a-b>0){
        c=a-a%b-1;
        d=1;
        while(c){
            d*=c%10;
            c/=10;
        }
        m = max(m, d);
        b*=10;
    }
    return m;
}

int main(){
    long long n, ans;
    cin>>n;
    long long a = n-n%10-1;
    if(a<0) cout<<n;
    else cout<<pro(n);
    //cout<<"\n"<<a;
    return 0;
}
