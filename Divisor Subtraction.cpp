#include<bits/stdc++.h>
using namespace std;

long long smallPrime(long long n){
    for(long long i=2; i*i<=n; i++){
            if(n%i==0) return i;
    }
    return n;
}

int main(){
    long long n;
    cin>>n;
    if(n%2==0) cout<<n/2;
    else{
        long long d = smallPrime(n);
        cout<<1+(n-d)/2;
    }
    return 0;
}
