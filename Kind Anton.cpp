#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        int i;
        vector<int> v(n), u(n);
        map<int, int> m;
        for(i=0; i<n; i++){cin>>v[i]; m[v[i]]++;}
        for(i=0; i<n; i++) cin>>u[i];
        for(i=n-1; i>=0; i--){
            m[v[i]]--;
            if(v[i]==u[i]) continue;
            else if(v[i]>u[i] && m[-1]==0){cout<<"NO"; break;}
            else if(v[i]<u[i] && m[1]==0){cout<<"NO"; break;}
        }
        if(i==-1) cout<<"YES";
        cout<<endl;
    }
    return 0;
}
