#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, m, s, x, y;
    cin>>t;
    while(t--){
        cin>>n>>m;
        x=0; y=0;
        vector<vector<char>> v(n, vector<char>(m, '.'));
        vector<int> r(n, n), c(m, m);

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>v[i][j];
                if(v[i][j]=='*'){
                    c[j]--;
                    r[i]--;
                }
            }
        }

        s=n+m;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                s=min(s, r[i]+c[j]-(v[i][j]=='.'));
            }
        }

        cout<<s<<endl;
    }
    return 0;
}
