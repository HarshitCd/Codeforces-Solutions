#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, k, a;
    cin>>n>>k;
    a = k/n;
    if(k%n!=0) cout<<a+1;
    else cout<<a;
    return 0;
}
