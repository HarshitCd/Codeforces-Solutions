#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, c=0;
    cin>>n;
    vector<int> v(n);
    map<int, int> m, t;
    for(int i=1; i<n; i++){
        cin>>v[i];
        if(m[v[i]]==0) c++;
        m[v[i]]++;
    }
    for(int i=1; i<n; i++) if(m[i+1]==0) t[v[i]]++;
    for(auto x: t){
        if(x.second<3){cout<<"No"; return 0;}
        c--;
    }
    if(c==0) cout<<"Yes";
    else cout<<"No";

    return 0;
}
