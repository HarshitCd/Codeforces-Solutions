#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, a, b, f;
    cin>>n>>m;

    for(int i=0; i<m; i++){
        cin>>a;
        map<int, int> r, m;
        f=1;
        for(int j=0; j<a; j++){
            cin>>b;
            if(b<0){b*=-1; r[b]=1;}
            else m[b]=1;
            if(r[b] && m[b]) f=0;
        }
        if(f){cout<<"YES"; return 0;}
    }
    cout<<"NO";
    return 0;
}
