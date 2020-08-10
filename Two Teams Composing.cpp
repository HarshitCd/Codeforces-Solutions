#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        int c=0, k, i=0, j=-1;
        map<int, int> m;
        for(int i=0; i<n; i++){
            cin>>k;
            m[k]++;
        }
        for(auto x: m){
            if(x.second>j){j=x.second; k=x.first;}
            i++;
        }

        if(n==2) cout<<1;
        else if(n==1) cout<<0;
        else{
            //cout<<i<<"-"<<m[k]<<endl;
            if(i-1>=m[k]) cout<<m[k];
            else if(m[k]>=1+i) cout<<i;
            else cout<<i-1;
        }
        cout<<endl;
    }
    return 0;
}
