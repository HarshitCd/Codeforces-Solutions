#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, ans=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    for(int i=1; i<n-1; i++){
        if(v[0]<v[i] && v[i]<v[n-1]) ans++;
    }
    cout<<ans;
    return 0;
}
