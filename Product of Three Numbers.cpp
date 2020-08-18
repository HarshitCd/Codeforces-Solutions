#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n=1e9, i;
    cin>>t;
    while(t--){
        vector<int> v;
        cin>>n;
        for(i=2; i*i<=n; i++){
            if(n%i==0){v.push_back(i); n/=i;}
            if(v.size()==2) break;
        }

        if(v.size()==2){
            if(v[0]!=n && v[1]!=n && n!=1){
                cout<<"YES\n";
                for(int x: v) cout<<x<<" ";
                cout<<n;
            }
            else cout<<"NO";
        }
        else cout<<"NO";
        cout<<endl;
    }
    return 0;
}

