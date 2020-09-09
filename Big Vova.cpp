#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    while(b){
        a%=b;
        swap(a, b);
    }
    return a;
}


int main(){
    int t, n, a, i, g, m;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v(n);
        for(i=0; i<n; i++) cin>>v[i];

        sort(v.rbegin(), v.rend());
        cout<<v[0]<<" ";
        a=v[0];
        for(i=1; i<n; i++){
            g=0;
            for(int j=1; j<n; j++){
                if(v[j]<0) continue;
                if(gcd(a, v[j])>g){
                    g=gcd(a, v[j]);
                    m=j;
                }
            }
            cout<<v[m]<<" ";
            v[m]*=-1;
            a=g;
        }
        cout<<endl;
    }
    return 0;
}
