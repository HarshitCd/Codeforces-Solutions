#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    char d;
    cin>>n>>m;
    vector<pair<int, int>> v;
    //vector<vector<char>> c(n, vector<char>(m, '.'));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>d;
            if(d=='*') v.push_back(make_pair(i+1, j+1));
        }
    }
    if(v[0].first==v[1].first && v[0].second==v[2].second)
        cout<<v[2].first<<" "<<v[1].second;
    else if(v[0].first==v[2].first && v[0].second==v[1].second)
        cout<<v[1].first<<" "<<v[2].second;
    else if(v[1].first==v[0].first && v[1].second==v[2].second)
        cout<<v[2].first<<" "<<v[0].second;
    else if(v[1].first==v[2].first && v[1].second==v[0].second)
        cout<<v[0].first<<" "<<v[2].second;
    else if(v[2].first==v[0].first && v[2].second==v[1].second)
        cout<<v[1].first<<" "<<v[0].second;
    else
    //if(v[2].first==v[1].first && v[2].second==v[0].second)
        cout<<v[0].first<<" "<<v[1].second;
    return 0;
}
