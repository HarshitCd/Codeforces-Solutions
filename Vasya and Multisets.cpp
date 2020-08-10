#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, c=0, a, ans=1, i, ma=0;
    map<int, int> m;
    set<int> s;
    cin>>n;
    vector<int> v(n);
    for(i=0; i<n; i++){
        cin>>v[i];
        m[v[i]]++;
    }
    i=0;
    for(int x: v){
        m[x]--;
        if(find(s.begin(), s.end(), x)==s.end()){c++; s.insert(x); i++;}
        ma = max(i, ma);
        if(m[x]==0) {c--; i--;}
    }

    cout<<ma;
    return 0;
}
