#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, c=0, i, j=0;
    cin>>n;
    vector<int> v(n), u(n);
    map<int, int> m;
    for(i=0; i<n; i++) cin>>v[i];
    for(i=0; i<n; i++) cin>>u[i];

    for(i=0; i<n; i++){
        if(m[v[i]]==1) continue;
        while(j<n && v[i]!=u[j]){
            c++;
            m[u[j]]=1;
            j++;
        }
        j++;
    }
    cout<<c;
    return 0;
}
