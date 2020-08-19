#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, b, e=0, o=0, i;
    cin>>n>>b;
    vector<int> v(n), u;
    for(i=0; i<n; i++) cin>>v[i];
    for(i=0; i<n; i++){
        (v[i]%2==0)? e++: o++;
        if(i+1!=n && e==o) u.push_back(abs(v[i]-v[i+1]));
    }
    sort(u.begin(), u.end());
    for(i=0; i<u.size(); i++){
        b-=u[i];
        if(b<0) break;
    }
    cout<<i;
    return 0;
}
