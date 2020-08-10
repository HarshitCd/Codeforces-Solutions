#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long a){
    for(int i=2; i<=sqrt(a); i++){
        if(a%i==0) return false;
    }
    return true;
}

int main(){
    int t;
    long long a, b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a-b==1 && isPrime(a+b)) cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
    return 0;
}
/*
5
160 159
223 222
480 479
357 356
345 344

*/
