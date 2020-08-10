#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, ans=0;
    cin>>n;
    vector<vector<int>> v(n, vector<int>(n));
    vector<int> r(n), c(n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) cin>>v[i][j];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            r[i] += v[i][j];
            c[i] += v[j][i];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(c[j]>r[i]) ans++;
        }
    }
    cout<<ans;
    return 0;
}
