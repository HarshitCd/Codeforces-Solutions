#include<bits/stdc++.h>
using namespace std;

int main(){
    int k, n, s, p;
    cin>>k>>n>>s>>p;

    int a=(n%s==0)?n/s:n/s+1;
    int b=k*a;
    int c=(b%p==0)?b/p:b/p+1;
    cout<<c;
    return 0;
}
