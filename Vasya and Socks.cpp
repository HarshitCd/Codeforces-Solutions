#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int a=n;
    while(n/m){
        a+=n/m;
        n=n/m+n%m;
    }
    cout<<a;
    return 0;
}
