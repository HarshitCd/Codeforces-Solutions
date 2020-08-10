#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int a=2*n;
    if(m-a>=n) cout<<0;
    else cout<<n+a-m;
    return 0;
}
