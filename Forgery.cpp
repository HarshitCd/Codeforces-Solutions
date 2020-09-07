#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k, c=0;
    cin>>n>>m;
    vector<string> v(n);
    vector<vector<int>> co(8, vector<int>(2));
    co = {{0, 0},{0, 1},{0, 2},{1, 0},{1, 2},{2, 0},{2, 1},{2, 2}};
    map<vector<int>, int> ma;
    vector<int> xy(2);
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<n-2; i++){
        for(int j=0; j<m-2; j++){
            if(v[i][j]=='#' && i+2<n && j+2<m){
                for(k=0; k<8; k++){
                    xy[0]=i+co[k][0];
                    xy[1]=j+co[k][1];
                    if(v[xy[0]][xy[1]]!='#') break;
                }
                if(k==8){
                    for(k=0; k<8; k++){
                        xy[0]=i+co[k][0];
                        xy[1]=j+co[k][1];
                        if(ma[xy]==0) c++;
                        ma[xy]++;
                    }
                }
            }

        }
    }
    k=0;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            if(v[i][j]=='#') k++;

    if(c==k) cout<<"YES";
    else cout<<"NO";
    return 0;
}
