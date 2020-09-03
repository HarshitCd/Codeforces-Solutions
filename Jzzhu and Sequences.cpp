#include<bits/stdc++.h>
using namespace std;

int main(){
    const int mod = 1e9+7;
    vector<vector<long long>> v = {{1, -1}, {1, 0}}, res = {{1, 0},{0, 1}}, tmp = {{0, 0},{0, 0}};
    long long x, y, n;
    cin>>x>>y>>n;

    if(n==1){
        while(x<0) x+=mod;
        cout<<x;
    }
    else if(n==2){
        while(y<0) y+=mod;
        cout<<y;
    }
    else{
        n-=2;
        while(n){
            if(n%2==1){
                tmp[0][0] = (res[0][0]*v[0][0] + res[0][1]*v[1][0])%mod;
                tmp[0][1] = (res[0][0]*v[0][1] + res[0][1]*v[1][1])%mod;
                tmp[1][0] = (res[1][0]*v[0][0] + res[1][1]*v[1][0])%mod;
                tmp[1][1] = (res[1][0]*v[0][1] + res[1][1]*v[1][1])%mod;
                res=tmp;

            }

            //cout<<v[0][0]<<"*"<<v[0][0]<<"+"<<v[0][1]<<"*"<<v[1][0]<<" "<<v[0][0]<<"*"<<v[1][0]<<"+"<<v[0][1]<<"*"<<v[1][1]<<endl;
            //cout<<v[1][0]<<"*"<<v[0][0]<<"+"<<v[1][1]<<"*"<<v[1][0]<<" "<<v[1][0]<<"*"<<v[1][0]<<"+"<<v[1][1]<<"*"<<v[1][1]<<endl<<endl;

            tmp[0][0] = (v[0][0]*v[0][0] + v[0][1]*v[1][0])%mod;
            tmp[0][1] = (v[0][0]*v[0][1] + v[0][1]*v[1][1])%mod;
            tmp[1][0] = (v[1][0]*v[0][0] + v[1][1]*v[1][0])%mod;
            tmp[1][1] = (v[1][0]*v[0][1] + v[1][1]*v[1][1])%mod;
            v=tmp;
            n/=2;
        }
        long long ans=(res[0][0]%mod*y%mod+res[0][1]%mod*x%mod)%mod;
        while(ans<0) ans+=mod;
        cout<<ans<<endl;
    }

    return 0;
}
