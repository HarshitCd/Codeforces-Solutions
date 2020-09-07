#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k;
    cin>>n>>m>>k;
    vector<vector<int>> v(n+1, vector<int> (m+1)), u(k, vector<int> (3));
    for(int i=0; i<k; i++)
        cin>>u[i][0]>>u[i][1]>>u[i][2];

    for(int i=k-1; i>=0; i--){
        if(u[i][0]==1){
            if(v[u[i][1]][0]==0){
                v[u[i][1]][0]=1;
                for(int j=1; j<=m; j++) if(v[u[i][1]][j]==0) v[u[i][1]][j]=u[i][2];
            }
        }
        else{
            if(v[0][u[i][1]]==0){
                v[0][u[i][1]]=1;
                for(int j=1; j<=n; j++) if(v[j][u[i][1]]==0) v[j][u[i][1]]=u[i][2];
            }
        }
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++) cout<<v[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
