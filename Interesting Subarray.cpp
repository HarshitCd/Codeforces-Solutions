#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t, i;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v(n);
        for(i=0; i<n; i++) cin>>v[i];
        for(i=1; i<n; i++){
            if(abs(v[i]-v[i-1])>=2){
                cout<<"YES\n"<<i<<" "<<i+1<<endl;
                break;
            }
        }
        if(i==n) cout<<"NO\n";
        //cout<<n<<endl;
    }
    return 0;
}

