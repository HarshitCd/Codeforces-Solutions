#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int l, r, d, i=1;
        cin>>l>>r>>d;
        if(d>=l && d<=r){ if((r+1)%d==0)cout<<r+1; else cout<<r+1+(d-(r+1)%d);}
        else cout<<d;
        cout<<endl;
    }
    return 0;
}
