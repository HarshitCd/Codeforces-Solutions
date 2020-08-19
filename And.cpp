#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x, b;
    cin>>n>>x;

    vector<int> v(n);
    map<int, int> m;
    for(int i=0; i<n; i++){
        cin>>v[i];
        m[v[i]]++;
        if(m[v[i]]==2) {cout<<0; return 0;}
    }

    for(int i=0; i<n; i++){
        b=v[i]&x;
        if(m[b]==1 && v[i]!=b) {cout<<1; return 0;}
    }

    m.clear();
    for(int i=0; i<n; i++){
        b=v[i]&x;
        m[b]++;
        if(m[b]==2){cout<<2; return 0;}
    }
    cout<<-1;
    return 0;
}
