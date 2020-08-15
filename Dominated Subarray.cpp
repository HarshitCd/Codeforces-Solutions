#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, a, ans;
    cin>>t;
    while(t--){
        ans=INT_MAX;
        cin>>n;
        map<int, int> m;
        for(int i=0; i<n; i++){
            cin>>a;
            if(m[a]!=0){
                ans = min(ans, i+2-m[a]);
            }
            m[a]=i+1;
        }
        if(ans==INT_MAX) cout<<-1;
        else cout<<ans;
        cout<<endl;
    }
    return 0;
}
