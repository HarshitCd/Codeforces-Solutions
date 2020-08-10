#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    unsigned long long ans=0;
    cin>>a>>b;
    vector<long long> v(5, a/5), u(5, b/5);
    int n = a%5;
    while(n>0){
        v[n--]++;
    }
    n=b%5;
    while(n>0){
        u[n--]++;
    }
    n=0;
    while(n!=5){
        ans+=v[n]*u[(5-n)%5];
        n++;
    }
    cout<<ans;
}

