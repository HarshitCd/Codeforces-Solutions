#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, d=1, i, ma=0;
    string ss;
    set<char> s;
    map<char, int> m;
    cin>>n>>k>>ss;
    for(i=0; i<n; i++) m[ss[i]]++;
    i=0;
    for(auto x: ss){
        m[x]--;
        if(find(s.begin(), s.end(), x)==s.end()){s.insert(x); i++;}
        ma = max(i, ma);
        if(m[x]==0) {i--;}
    }

    //cout<<ma;
    if(ma<=k) cout<<"NO";
    else cout<<"YES";
    return 0;
}
