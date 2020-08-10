#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    if(n<32) cout<<m%int(pow(2, n));
    else cout<<m;
    return 0;
}
