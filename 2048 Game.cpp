#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    long long a;
    cin>>t;
    while(t--){
        map<long long, int> m;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a;
            m[a]++;
        }
        for(int i=1; i<2048; i*=2){
            m[i*2]+=m[i]/2;
        }
        if(m[2048]) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
