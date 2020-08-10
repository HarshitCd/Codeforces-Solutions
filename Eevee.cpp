#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> e = {"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};
    map<int, vector<string>> m;
    for(string x: e){
        m[x.size()].push_back(x);
    }
    int n, i=0, ma=0;
    string s;
    cin>>n>>s;
    vector<int> v(m[n].size());
    for(auto x: m[n]){
        for(int j=0; j<n; j++){
            if(s[j]=='.') continue;
            else if(x[j]==s[j]) v[i]++;
            else break;
        }

        if(v[ma]<v[i]) ma=i;
        i++;
    }
    cout<<m[n][ma];
    return 0;
}
