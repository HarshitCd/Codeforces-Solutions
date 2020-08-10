#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a[2], ans=0;
    cin>>n>>a[0]>>a[1];
    //cout<<a[0]<<" "<<a[1]<<endl;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<n/2; i++){
        if(v[i]==v[n-1-i]){ if(v[i]==2) ans+=2*min(a[0], a[1]);}
        else if(v[i]==2 || v[n-1-i]==2){
            if(v[i]==2) ans+=a[v[n-1-i]];
            else ans+=a[v[i]];
        }
        else{cout<<-1; return 0;}
    }
    if(n%2==1){if(v[n/2]==2) ans+=min(a[0], a[1]);}
    cout<<ans;
    return 0;
}


/*
5 100 1
2 0 2 2 2
*/
