#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        int j=0, ans=0;
        vector<int> v(n), u(n);
        for(int i=0; i<n; i++) cin>>v[i];
        u[j]=v[0];
        for(int i=1; i<n; i++){
            while(j!=-1 && u[j]>v[i]){j--; ans++;}
            u[++j]=v[i];
        }

        cout<<ans<<endl;
    }
    return 0;
}
