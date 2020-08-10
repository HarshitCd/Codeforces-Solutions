#include<bits/stdc++.h>
using namespace std;

int main(){
    int l, r;
    cin>>l>>r;
    if(l==r) cout<<l;
    else{
        if(l-r==2 && l%2!=0) cout<<l;
        else cout<<2;
    }
    return 0;
}
