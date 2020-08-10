#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    int r;
    while(b>0){
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}

int main(){
    int n, s=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.rbegin(), v.rend());
    for(int i=0; i<n-1; i++) v[i]-=v[i+1];

    int g = gcd(v[0], v[1]);

    for(int i=2; i<n; i++) g = gcd(g, v[i]);
    cout<<g*n;
    return 0;
}
