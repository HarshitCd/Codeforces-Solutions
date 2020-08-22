#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, x, a, m;
    cin>>t;
    while(t--){
        cin>>n>>x;
        m=0;
        int f=0;
        for(int i=0; i<n; i++){
            cin>>a;
            if(a>m) m=a;
            if(a==x) f=1;
        }
        if(f) cout<<1;
        else if(m>x) cout<<2;
        else if(m==x) cout<<1;
        else{
            m = (x%m==0)? x/m: x/m+1;
            cout<<m;
        }
        cout<<endl;
    }
    return 0;
}
