#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, m;
    cin>>t;
    while(t--){
        long long s =0;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        m=v[0];
        for(int i=1; i<n; i++){
            if((v[i]<0 && v[i-1]>0) || (v[i]>0 && v[i-1]<0)){
                s+=m;
                m=v[i];
            }
            else m = max(v[i], m);
        }
        cout<<s+m<<endl;
    }
    return 0;
}
