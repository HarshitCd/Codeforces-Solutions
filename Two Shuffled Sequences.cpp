#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a;
    map<int, int> m;
    cin>>n;
    vector<int> v, u;
    for(int i=0; i<n; i++){
        cin>>a;
        m[a]++;
        if(m[a]==1) v.push_back(a);
        else if(m[a]==2) u.push_back(a);
        else{cout<<"NO\n"; return 0;}
    }
    cout<<"YES\n";
    cout<<u.size()<<endl;
    if(u.size()!=0){
        sort(u.begin(), u.end());
        for(int x: u) cout<<x<<" ";
    }
    cout<<endl;
    cout<<v.size()<<endl;
    sort(v.rbegin(), v.rend());
    for(int x: v) cout<<x<<" ";

    return 0;
}
