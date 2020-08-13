#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int z=0, m=n, s=0;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
            v[i]%=k;
            if(v[i]==0) z++;
            else m = min(m, min(i+1, abs(n-i)));

            s+=v[i];
        }
        if(z==n) cout<<-1;
        else if(s%k!=0) cout<<n;
        else cout<<n-m;
        cout<<endl;
    }
    return 0;
}
