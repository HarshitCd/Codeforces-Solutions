#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, a, ans=0;
    cin>>n>>m;
    vector<vector<int>> v(n, vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a;
            if(a){
                if(i==0 || i==n-1 || j==0 || j==m-1) ans++;
            }
        }
    }
    if(ans==0) cout<<4;
    else cout<<2;
    return 0;
}
