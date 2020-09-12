#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, i, j, c=1;
    cin>>n;
    vector<long long> u(32);
    for(int i=0; i<32; i++){
        u[i]=c;
        c<<=1;
    }

    map<long long, long long> m;
    for(i=0; i<n; i++){
        cin>>c;
        m[c]++;
    }
    c=0;
    for(auto x: m){
        for(j=0; j<32; j++){
            if(abs(u[j]-x.first)==x.first && x.second==1) continue;
            if(u[j]>x.first && m[u[j]-x.first]!=0){
                c+=x.second;
                break;
            }
        }
    }
    cout<<n-c;
    return 0;
}
