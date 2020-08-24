#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, h, i, j;
    cin>>n>>m>>h;
    vector<int> v(m), l(n);
    vector<vector<int>> t(n, vector<int>(m));
    for(i=0; i<m; i++) cin>>v[i];
    for(i=0; i<n; i++) cin>>l[i];
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cin>>t[i][j];
            if(t[i][j]==1) t[i][j]=min(v[j], l[i]);
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<m; j++) cout<<t[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
