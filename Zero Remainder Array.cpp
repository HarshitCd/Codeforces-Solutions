#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t, n, k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        long long i, x=0, mx=k;
        vector<int> v(n);
        map<int, int> m;
        for(i=0; i<n; i++){
            cin>>v[i];
            v[i]=(v[i]%k==0)? 0: k-v[i]%k;
            m[v[i]]++;
            if(v[i]!=0 && ((m[v[i]]==m[mx] && v[i]>mx) || (m[v[i]]>m[mx]))) mx=v[i];
        }
        if(m[0]==n) cout<<x<<endl;
        else cout<<mx+1+k*(m[mx]-1)<<endl;
    }
    return 0;
}
