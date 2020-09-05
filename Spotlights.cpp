#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    long long ans=0;
    set<int> x, y;
    cin>>n>>m;

    vector<vector<int>> v(n, vector<int>(m));
    vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int> (5)));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>v[i][j];
            if(i-1>=0 && (v[i-1][j] || dp[i-1][j][0])){dp[i][j][0]++; dp[i][j][4]++;}
            if(j-1>=0 && (v[i][j-1] || dp[i][j-1][1])){dp[i][j][1]++; dp[i][j][4]++;}
        }
    }


    for(int i=n-1; i>=0; i--){
        for(int j=m-1; j>=0; j--){
            if(i+1<n && (v[i+1][j] || dp[i+1][j][2])){dp[i][j][2]++; dp[i][j][4]++;}
            if(j+1<m && (v[i][j+1] || dp[i][j+1][3])){dp[i][j][3]++; dp[i][j][4]++;}
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(v[i][j]==0) ans+=dp[i][j][4];
        }
    }

    cout<<ans;
    return 0;
}
