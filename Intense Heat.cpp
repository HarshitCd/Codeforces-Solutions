#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    double ans=0, a;
    cin>>n>>k;
    vector<double> v(n+1);
    for(int i=1; i<=n; i++){
        cin>>v[i];
        v[i]+=a;
        a=v[i];
    }
    a=0;
    for(int i=0; i<n-k+1; i++){
        for(int j=k+i; j<n+1; j++){
            a = (v[j]-v[i])/(j-i);
            ans = max(ans, a);
        }
    }
    printf("%.7lf", ans);
    return 0;
}
