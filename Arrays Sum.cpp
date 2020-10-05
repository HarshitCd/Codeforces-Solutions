#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, k;
    cin>>t;
    while(t--){
        map<int, int> m;
        int c=0;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(m[v[i]]==0) c++;
            m[v[i]]++;
        }
        if(k==1 && c==1) cout<<1;
        else if(k==1 && c!=1) cout<<-1;
        else {
            if(c!=1) c--;
            c = (c%(k-1))? c/(k-1)+1: c/(k-1);
            cout<<c;
        }
        cout<<"\n";
    }
    return 0;
}
