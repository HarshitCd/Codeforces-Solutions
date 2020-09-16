#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k, ans=0;
    cin>>n>>m>>k;
    vector<string> v(n);
    vector<vector<int>> valR(n+1, vector<int>(m+1)), valC(n+1, vector<int>(m+1));
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(v[i][j]=='.'){
                valR[i+1][j+1]++;
                if(j-1>=0) valR[i+1][j+1]+=valR[i+1][j];
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(v[i][j]=='.'){
                valC[i+1][j+1]++;
                if(i-1>=0) valC[i+1][j+1]+=valC[i][j+1];
            }
        }
    }


    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            //if(j-k>=0) cout<<"R "<<valR[i][j]<<" "<<valR[i][j-k]<<endl;
            //if(i-k>=0) cout<<"C "<<valC[i][j]<<" "<<valC[i-k][j]<<endl;
            if(j-k>=0 && valR[i][j] - valR[i][j-k]==k) ans++;
            if(i-k>=0 && valC[i][j] - valC[i-k][j]==k) ans++;
        }
    }
    if(k==1) ans/=2;
    cout<<ans;
    return 0;
}

