#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, q, a, j=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    vector<int> u(v[n-1]+1);
    for(int i=0;i<n; i++) u[v[i]]++;
    for(int i=1; i<=v[n-1]; i++) u[i]=u[i]+u[i-1];
    cin>>q;

    for(int i=0; i<q; i++){
        cin>>a;
        if(a<=v[n-1]) cout<<u[a]<<endl;
        else cout<<n<<endl;
    }
    //for(int x: u) cout<<x<<" ";
    return 0;
}
