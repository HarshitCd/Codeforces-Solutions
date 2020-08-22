#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, v[3], p=0;
    cin>>n>>v[0]>>v[1]>>v[2];
    sort(v, v+3);

    int m = n/v[0], k;
    for(int i=n; i>=0; i--){
        for(int j=0; j<=n; j++){
            k = abs((n-(v[0]*i+v[1]*j))/v[2]);
            if((v[0]*i + v[1]*j + v[2]*k)==n) p=max(p, i+j+k);
        }
    }
    cout<<p;
    return 0;
}
