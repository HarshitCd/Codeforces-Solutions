#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, a, i;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v(n), u(n);
        set<int> s;
        for(i=0; i<n; i++){
            cin>>v[i];
            u[v[i]-1]=1;
        }
        for(int i=0; i<n; i++) if(u[i]==0) s.insert(i+1);
        a = v[0];
        for(i=1; i<n; i++){
            //cout<<a<<" ";
            if(a!=v[i]){a=v[i];}
            else{
                a=v[i];
                if(s.empty() || *s.begin()>a) break;
                v[i] = *s.begin();
                s.erase(v[i]);
            }
        }
        if(i==n) for(int x: v) cout<<x<<" ";
        else cout<<-1;
        cout<<endl;
    }
    return 0;
}
