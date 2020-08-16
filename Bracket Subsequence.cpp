#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int m = 1<<n, s;
    for(int i=0; i<m; i++){
        s=0;
        for(int j=0; j<n; j++){
            if((1<<j)&i) s+=v[j];
            else s-=v[j];
        }
        if(s%360==0){cout<<"YES"; return 0;}
    }
    cout<<"NO";
    return 0;
}

