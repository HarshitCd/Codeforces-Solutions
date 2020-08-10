#include<bits/stdc++.h>
using namespace std;

int main(){
    int i, n, a, t;
    cin>>t;
    for(int j=0; j<t; j++){
        cin>>n;
        vector<int> v(n);
        for(i=0; i<n; i++) cin>>v[i];
        a=v[0];
        for(i=1; i<n; i++){
            if((a-v[i])%2!=0){
                //cout<<a<<" "<<v[i]<<endl;
                cout<<"NO\n";
                break;
            }
        }
        if(i==n) cout<<"YES\n";
    }
    return 0;
}
