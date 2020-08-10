#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, a;
    cin>>t;
    while(t--){
        int ans=0;
        map<int, int> m;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a;
            m[a%3]++;
        }
        ans+=m[0];
        ans+=min(m[1], m[2]);
        ans=ans+abs(m[1]-m[2])/3;
        cout<<ans<<endl;
    }
}
