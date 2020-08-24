#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i, m, c=0, j, k;
    cin>>n;
    vector<int> v(n), u;
    for(i=0; i<n; i++) cin>>v[i];

    u=v;
    sort(v.begin(), v.end());

    for(i=0; i<n; i++) if(v[i]!=u[i]) break;
    for(j=n-1; j>=0; j--) if(v[j]!=u[j]) break;

    reverse(u.begin()+i, u.begin()+j+1);
    for(k=0; k<n; k++) if(v[k]!=u[k]) break;

    if(i==n && j==-1) cout<<"yes\n1 1";
    else if(k==n) cout<<"yes\n"<<i+1<<" "<<j+1;
    else cout<<"no";

    return 0;
}
