#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, m, a, ans=0;
    cin>>n>>m>>a;
    ans=(n%a==0)?n/a:n/a+1;
    ans*=(m%a==0)?m/a:m/a+1;
    cout<<ans;
    return 0;
}
