#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t;
    cin>>t;
    while(t--){
        int m=0, i, j, x, y;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(v[m]<v[i]) m=i;
        }
        for(i=0; i<n; i++){
            if(v[i]<i) break;
            x=i;
        }

        for(i=n-1; i>=0; i--){
            if(v[i]<n-i-1) break;
            y=i;
        }

        if(y>x) cout<<"No\n";
        else cout<<"Yes\n";
    }
    return 0;
}

