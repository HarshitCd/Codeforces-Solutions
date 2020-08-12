#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, s=0, b, i=1;
    cin>>n;
    while(n/10){
        if(n%10>4) b = 9-n%10;
        else b = n%10;
        s = s+b*i;
        i*=10;
        n/=10;
    }
    if(n!=9 && n>4) n=9-n;
    s=s+n*i;
    cout<<s;
    return 0;
