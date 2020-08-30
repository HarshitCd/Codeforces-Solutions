#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, i, j, k=0, f;
    cin>>n>>m;
    vector<string> v(n);
    vector<int> c(m);

    for(i=0; i<n; i++){
        cin>>v[i];
        for(j=0; j<m; j++){
            if(v[i][j]=='1') c[j]++;
        }
    }

    for(i=0; i<n; i++){
        f=1;
        for(j=0; j<m; j++){
            if(v[i][j]=='1' && c[j]==1) f=0;
        }
        if(f){cout<<"YES"; return 0;}
    }

    cout<<"NO";
    return 0;
}
