#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, c=0, ans=0;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<n; i++){
        v[i]+=c;
        if(v[i]>=8){
            ans+=8;
            c=v[i]-8;
        }
        else{
            ans+=v[i];
            c=0;
        }
        if(ans>=k) {cout<<i+1; break;}
    }
    if(ans<k) cout<<-1;
    return 0;
}
