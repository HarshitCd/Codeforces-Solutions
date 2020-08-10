#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, x, y, z;
    cin>>x>>y>>z;
    a=abs(x-y);
    if(y>x){
        if(a<=z) cout<<'?';
        else cout<<'-';
    }
    else if(y<x){
        if(a<=z) cout<<'?';
        else cout<<'+';
    }
    else{
        if(a<z) cout<<'?';
        else cout<<'0';
    }
    return 0;
}
