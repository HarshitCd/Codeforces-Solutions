#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k, a, b;
    cin>>n>>m>>k;
    vector<long long> noti(n), group(m);
    vector<vector<int>> v(n, vector<int>(m));
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++) cin>>v[i][j];

    for(int i=0; i<k; i++){
        cin>>a>>b;
        a--; b--;
        noti[a]--;
        group[b]++;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) noti[i]+=group[j]*v[i][j];
        cout<<noti[i]<<" ";
    }
    return 0;
}
