#include<bits/stdc++.h>
using namespace std;

int main(){
    double l, r, x, y, k, i, j;
    cin>>l>>r>>x>>y>>k;
    i=r; j=x;
    for(i=x; i<=y; i++){
        if(i*k>=l && i*k<=r){cout<<"YES"; return 0;}
    }
    cout<<"NO";

    return 0;
}
