#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, x, m, a, ans, i, j;
    cin>>t;
    while(t--){
        cin>>n>>x;
        m=n; ans=0;
        vector<int> v(n);

        for(int i=0; i<n; i++) cin>>v[i];

        i=0;
        while(i<n){
            v[i] = (x%v[i])? x/v[i]+1: x/v[i];
            i++;
        }
        sort(v.begin(), v.end());

        i=0;
        while(i<n){
            a = v[i];
            j=1;
            while(i+j<n && a-j){
                a = max(v[i+j], a);
                j++;
            }
            i+=j;
            if(a-j==0) ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
