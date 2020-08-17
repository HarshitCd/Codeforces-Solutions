#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, c1, c2;
    cin>>n>>m;
    vector<pair<int, int>> u, z;
    u.push_back(make_pair(0, 0));
    u.push_back(make_pair(0, 1));
    u.push_back(make_pair(1, 0));
    u.push_back(make_pair(1, 1));
    vector<vector<int>> v(n, vector<int> (m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) cin>>v[i][j];
    }

    for(int i=0; i<n-1; i++){
        for(int j=0; j<m-1; j++){
            c1=0; c2=0;
            for(auto x: u) if(v[i+x.first][j+x.second]==1 || v[i+x.first][j+x.second]==2) c1++;
            if(c1==4){
                for(auto x: u) v[i+x.first][j+x.second]=2;
                z.push_back(make_pair(i+1, j+1));
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(v[i][j]==1){
                cout<<-1;
                return 0;
            }
        }
    }
    cout<<z.size()<<endl;
    for(auto x: z) cout<<x.first<<" "<<x.second<<endl;
    return 0;
}
