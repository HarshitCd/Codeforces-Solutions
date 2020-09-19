#include<bits/stdc++.h>
using namespace std;

long long zcy(long long n){
    long long c=n, d=0;
    int i=0;
    while(c!=0){
        d = d*10+c%10;
        i++;
        c/=10;
    }
    return n*pow(10, i)+d;
}

int main(){
    int k, p;
    long long sum=0, n=1;
    cin>>k>>p;

    while(k--){
        sum+=zcy(n);
        n++;
    }

    cout<<sum%p;
    return 0;
}
