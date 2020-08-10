#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, c;
    cin>>t;
    while(t--){
        c=0;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        for(int i=0; i<n; i++){
            if(abs(v[i]-v[(i+1)%n])==1) c++;
        }
        if(n==2 || n==1) cout<<"YES";
        else if(c==n-1) cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
    return 0;
}
