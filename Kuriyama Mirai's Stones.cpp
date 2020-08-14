#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t, n, a=0, ty, l, r;
    cin>>n;
    vector<long long> v(n), u(n+1), p(n+1);
    for(int i=0; i<n; i++){
        cin>>v[i];
        p[i+1]=a+v[i];
        a = p[i+1];
    }
    sort(v.begin(), v.end());
    a=0;
    for(int i=0; i<n; i++){
        u[i+1]=a+v[i];
        a = u[i+1];
    }
    cin>>t;
    while(t--){
        cin>>ty>>l>>r;
        if(ty==1) cout<<p[r]-p[l-1];
        else cout<<u[r]-u[l-1];
        cout<<endl;
    }

    return 0;
}
