#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, x, y, d;
    cin>>t;
    while(t--){
        int r = INT_MAX;
        cin>>n>>x>>y>>d;
        int a = (x-1)%d==0?(x-1)/d:(x-1)/d+1;
        int b = (n-x)%d==0?(n-x)/d:(n-x)/d+1;
        if(abs(x-y)%d==0) r = abs(x-y)/d;
        if((y-1)%d==0) r = min(r, a+(y-1)/d);
        if((n-y)%d==0) r = min(r, b+(n-y)/d);
        if(r==INT_MAX) cout<<-1;
        else cout<<r;
        cout<<endl;
    }
    return 0;
}
