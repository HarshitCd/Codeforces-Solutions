#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, c=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());

    for(int i=1; i<n; i++){
        if(v[i]-v[i-1]==1) c++;
        else if(v[i]-v[i-1]==0) continue;
        else c=0;
        if(c==2){cout<<"YES"; return 0;}
    }
    cout<<"NO";
    return 0;
}
