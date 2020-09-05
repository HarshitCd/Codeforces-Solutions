#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    string a;
    char b;
    vector<string> v;
    set<string> s;
    for(int i=0; i<n; i++){
        cin>>a;
        s.insert(a);
    }

    for(string x: s) v.push_back(x);
    n = v.size();

    for(int i=0; i<m; i++){
        b='.';
        for(int j=0; j<n; j++){
            if(b=='.' && v[j][i]=='#') b=v[j][i];
            else if(b==v[j][i]&& b=='#'){cout<<"No"; return 0;}
        }
    }
    cout<<"Yes";
    return 0;
}
