#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, mm;
    map<int, int> m;
    cin>>n>>mm;
    vector<int> v(n), u(mm);
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<mm; i++) cin>>u[i];

    sort(v.begin(), v.end());
    sort(u.begin(), u.end());

    for(auto x: v) m[x]++;
    for(auto x: u) {
        m[x]++;
        if(m[x]==2){
            cout<<x;
            return 0;
        }
    }
    cout<<min(v[0], u[0])<<max(v[0], u[0]);
    return 0;
}
