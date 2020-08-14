#include<bits/stdc++.h>
using namespace std;

int main(){
    int i, a, n, k;
    cin>>n>>k;
    vector<int> v(n);
    for(i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());

    i=0;
    if(k==0){
        if(v[0]==1) cout<<-1;
        else cout<<v[0]-1;
        return 0;
    }

    while(i<n && v[i]<=v[k-1] && i<=k) i++;

    if(i==k) cout<<v[i-1];
    else cout<<-1;
    return 0;
}
