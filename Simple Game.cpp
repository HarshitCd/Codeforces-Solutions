#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;

    if(n==1 && m==1) cout<<m;
    else if(n-m<m) cout<<m-1;
    else cout<<m+1;
    return 0;
}
