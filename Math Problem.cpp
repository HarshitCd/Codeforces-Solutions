#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, a, b;
    cin>>t;
    while(t--){
        int rmin=INT_MAX, lmax=-1;
        cin>>n;
        vector<pair<int, int>> v;
        for(int i=0; i<n; i++){
            cin>>a>>b;
            if(b<rmin) rmin=b;
            if(a>lmax) lmax=a;
            sort(v.begin(), v.end());
        }
        //if(n==1) cout<<0<<endl;
        cout<<max(0, lmax-rmin)<<endl;
    }
    return 0;
}
