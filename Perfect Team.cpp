#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, a, b, c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        int d = max(a, b)-min(a, b);
        c+=d;

        if(a>b) a-=d;
        else b-=d;

        int e = min(a, min(b, c));
        a-=e; b-=e; c-=e;

        e+=(a+b)/3;

        cout<<e<<endl;
    }
    return 0;
}
