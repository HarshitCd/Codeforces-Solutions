#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t;
    cin>>t;
    while(t--){
        int l, h, ans=1, ma=0, c=0, a;
        cin>>n;
        l=0; h=n-1;
        vector<int> v(n);
        map<int, int> m;
        for(int i=0; i<n; i++){cin>>a; m[a]++;}

        for(int i=2; i<=2*n; i++){
            for(auto x: m){
                if(m[i-x.first]!=0) c+=min(x.second, m[i-x.first]);
            }
            ma = max(c, ma);
            c=0;
        }

        cout<<ma/2<<endl;

    }
    return 0;
}

