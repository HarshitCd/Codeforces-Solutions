#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, m, x, y;
    long long ans;
    cin>>t;
    while(t--){
        ans=0;
        cin>>n>>m>>x>>y;
        vector<vector<char>> v(n, vector<char>(m, '.'));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++) cin>>v[i][j];
        }
        y=min(y, 2*x);
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(j!=m-1 && v[i][j]==v[i][j+1] && v[i][j]=='.'){
                    v[i][j]=v[i][j+1]='*';
                    ans+=y;
                }
                else if(v[i][j]=='.'){
                    v[i][j]='*';
                    ans+=x;
                }
            }
        }

        cout<<ans<<endl;

    }
    return 0;
}
