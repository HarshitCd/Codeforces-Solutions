#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    vector<double> v(n), s(n+1);
    double tot=0;
    for(int i=0; i<n; i++){
        cin>>v[i];
        s[i+1] = s[i]+v[i];
    }

    for(int i=k; i<=n; i++){
        tot += s[i]-s[i-k];
    }
    k = n-k+1;
    printf("%.10lf", tot/k);
    return 0;
}
