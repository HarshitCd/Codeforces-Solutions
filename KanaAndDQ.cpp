#include<bits/stdc++.h>
using namespace std;

int main(){
    int h, n, m, t;
    cin>>t;
    for(int j=0; j<t; j++){
        cin>>h>>n>>m;
        while(n>0 && h>20) {h=h/2+10; n--;}
        while(m>0 && h>0) {h-=10; m--;}
        if(h>0) cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
    }
    return 0;
}
